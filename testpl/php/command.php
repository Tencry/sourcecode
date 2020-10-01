#!/usr/bin/env php
<?php

// session_start();

echo 'argc';
var_dump($argc);

echo 'argv';
var_dump($argv);

function calc_args() {
    $num = func_num_args();
    var_dump($num);
    if ($num > 0)
        func_get_arg($num - 1);
    var_dump( func_get_args() );
}
calc_args(1, 2, 3, 4, 5);


/*
echo 'cookie';
var_dump($_COOKIE);

echo 'env';
var_dump($_ENV);

echo 'files';
var_dump($_FILES);

echo 'get';
var_dump($_GET);

echo 'post';
var_dump($_POST);

echo 'request';
var_dump($_REQUEST);

echo 'server';
var_dump($_SERVER);
*/
// echo 'session';
// var_dump($_SESSION);
// session_destroy();