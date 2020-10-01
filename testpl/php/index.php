<?php

ini_set('display_errors', 'On');

define('BR', PHP_SAPI === 'cli' ? PHP_EOL : '<br>');
define('_LOG', TRUE);

function _log(string $message) {

    if ( _LOG ) {
        echo $message . BR;
    }
}

var_dump($_REQUEST);

abstract class Application {
    private static $instance = null;

    // add route
    abstract public function args();
    abstract public function params();
    abstract public function path();
    abstract public function run();

    public static function instance() {

        if ( self::$instance == null ) {
            if ( PHP_SAPI === 'cli' ) {
                self::$instance = new ConsoleApp();
            }
            else {
                self::$instance = new WebApp();
            }
        }
        return self::$instance;
    }

    public static function make_regexp(string $input) {
        $search  = [ '/' , '%d' , '%s'  ];
        $replace = [ '\/', '\d+', '\w+' ];
        
        return sprintf("/%s/i", 
            str_replace($search, $replace, $input)
        );
    }
}

class ConsoleApp extends Application {
    const PARAM_SIGN  = '-';
    protected $args   = []; // define data
    protected $params = []; // define behavior
    protected $routes = [];

    public function __construct() {
        global $argc, $argv;

        for( $i=1; $i < $argc; ++$i ) {
            if ( $argv[$i][0] === self::PARAM_SIGN ) {
                $this->params[] = $argv[$i];
            }
            else {
                $this->args[]   = $argv[$i];
            }
        }
        // foreach ($argv as $arg) {
        //     if ($arg[0] === self::PARAM_SIGN) {
        //         $this->params[] = $arg;
        //     }
        //     else {
        //         $this->args[]   = $arg;
        //     }
        // }
    }

    public function args() {

        return $this->args;
    }

    public function params() {

        return $this->params;
    }

    public function path() {

        return '/' . implode('/', $this->args);
    }

    public function route(string $route, callable $function) {

        $this->routes[ self::make_regexp($route) ] = $function;
    }

    public function run() {

        foreach ( $this->routes as $route => $function ) {
            _log($route);
            if ( preg_match($route, $this->path(), $matches) ) {
                var_dump($matches);
                $function($matches);
            }
        }
    }
}

class WebApp extends Application {
    protected $routes = [];
    protected $url    = [];

    public function __construct() {

        $this->url = parse_url($_SERVER['REQUEST_URI']);
    }

    public function args() {

        return explode('/', $this->path());
    }

    public function params() {

        _log('TODO: WebApp::params()');
    }

    public function path() {

        return isset($this->url['path']) ? $this->url['path'] : '/';
    }

    public function query() {

        return isset($this->url['query']) ? $this->url['query'] : NULL;
    }

    public function route(string $route, callable $function) {

        if ( is_callable($function) ) {
            $this->routes[ self::make_regexp($route) ] = $function;
        }
    }

    public function run() {

        foreach ( $this->routes as $route => $function ) {
            _log($route);
            if ( preg_match($route, $this->path(), $matches) ) {
                var_dump($matches);
                $function($matches);
            }
        }
    }
}

try {
    $app = Application::instance();

    // route can be simple regex or array with regex chunks
    // choose one of these
    $app->route('create-project/cakephp/cakephp/1.5.7', function($a) {

        _log('Its cakephp app');
        var_dump($a->params());
    });

    $app->route('/hello(/(%d))$', function($m) {

        _log('Route #2');
        var_dump($m);
    });

    $app->route('/hello$', function($m) {

        _log('Route #1');
        var_dump($m);
    });
        
    $app->route('/', function($m) {

        _log("Route #0");
    });

    // var_dump($app);
    // var_dump($_GET);

    $app->run();
} catch (Exception $e) {

    var_dump($e);
}


exit;
/////

/*

'/\/hello(\/(\d+))$/i'
['hello', '%d']

'/\/hello$/i'
['hello']

'/\//i'
[]

*/

