#include <stdio.h>
#define MAXLINE 1000 /* максимальная длина строки в потоке */

int getline(char line[], int maxline);
int clearline(char line[], int length);

/* вывод самой длинной строки в потоке */
main()
{
	int len;		/* длина текущей строки */
	char line[MAXLINE];	/* текущая введенная строка */

	while ((len = getline(line, MAXLINE)) > 0) {
		len = clearline(line, len);
		printf("%2dC\n", len);
	}

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

int clearline(char line[], int length)
{
	while (length > 0) {
		if (line[length-1] == ' ' 
				|| line[length-1] == '\t' 
				|| line[length-1] == '\n')
			line[length--] = '\0';
		else break;
	}
	return length;
}
