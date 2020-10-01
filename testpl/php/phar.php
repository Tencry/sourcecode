<?php

$phar = new Phar('arch.phar');
$phar['index.php'] = '<?php echo "Index php"; ?>';
$phar['readme.txt'] = 'Hello World!';

$phar->setDefaultStub('readme.txt', 'index.php');