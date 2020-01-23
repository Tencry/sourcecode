/* ex.1-2 */
#include <stdio.h>

main()
{
	printf("hello, ");
	printf("world");
	printf("\n");

	printf("\1\2\3\4\5\6\7\n"); /*unknown escape sequanses \`\8\9\0\-\=*/
	printf("\e\r\t\[\n");         /*\q\w\y\u\i\o\p\]*/
	printf("\a\f\'\\\n");          /*\s\d\g\h\j\k\l\;*/
	printf("\v\b\n\n");             /*\z\x\c\m\,\.\/*/

	printf("\n");               /*\~\!\@\#\$\%\^\&\*\(\)\_\+*/
	printf("\E\{\n");             /*\Q\W\R\T\Y\U\I\O\P\}*/
	printf("\n");                  /*\A\S\D\F\G\H\J\K\L\:\"\|*/
	printf("\?\n");                 /*\Z\X\C\V\B\N\M\<\>*/
}
