<?php



class Properties {
    private $filename = 'properties.php';
    private $props;

    public function __construct() {
        if (file_exists($this->filename)) {
            $this->include_props();
        }
        else {
            echo 'cant find0';
            // throw new Exception("file properties.php not found.");
        }
    }

    public function __construct1($filename) {
        if (file_exists($filename)) {
            $this->filename = $filename;
            $this->include_props();
        }
        else {
            echo 'cant file1';
            // throw new Exception("file properties.php not found.");
        }
    }

    public function include_props() {
        $this->props = include $this->path . $this->file;
    }

    public function get($key, $default = NULL) {
        return isset($this->props[$key]) ? $this->props[$key] : $default;
    }
}

function env($key, $default = NULL) {
    static $props;
    if ($props === NULL) {
        $props = new Properties();
    }
    return $props->get($key, $default);
}

function test() {
    
// $p = new Properties();
// echo $p->get('username');
// echo $p->get('email', 'noreply@email.com');

// echo env('username');
// echo env('username');
// echo env('username');
// echo env('username');
// echo env('username');
// echo env('username');
// echo env('username');

$p = new Properties('roperties.php');
echo $p->get('username');
echo $p->get('email', 'noreply@email.com');

}


function print_globals() {
    
echo '<pre>';
print_r($uri);
var_dump($_COOKIE);
var_dump($_ENV);
var_dump($_FILES);
var_dump($_GET);
var_dump($_POST);
var_dump($_REQUEST);
var_dump($_SERVER);
var_dump($_SESSION);
echo '</pre>';


}