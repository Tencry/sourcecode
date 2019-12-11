#include <stdio.h>
#define MAXLINE 1000 /* максимальная длина строки в потоке */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* вывод самой длинной строки в потоке */
main()
{
	int len;		/* длина текущей строки */
	int max;		/* текущая максимальная длина */
	char line[MAXLINE];	/* текущая введенная строка */
	char longest[MAXLINE];	/* самая длинная строка из введенных */

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)	/* была непустая строка */
		printf("%s", longest);

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

/* copy: копирует строку 'from' в 'to'; длина считается достаточной */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
