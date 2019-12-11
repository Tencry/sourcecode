#include <stdio.h>
#define MAXLINE 1000 /* максимальная длина строки в потоке */

int getline(char line[], int maxline);

/* вывод самой длинной строки в потоке */
main()
{
	int len;		/* длина текущей строки */
	char line[MAXLINE];	/* текущая введенная строка */

	while ((len = getline(line, MAXLINE)) > 0)
		if (len > 80)
			printf("%s", line);

	return 0;
}

/* getline: считывает строку в s, возвращает ее длину */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
