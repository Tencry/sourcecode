#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int limit);
int detab(char newline[], char line[], int tablength);

main()
{
	int len;
	char line[MAXLINE];
	char newline[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		len = detab(newline, line, 2);
		printf("%s", newline);
	}
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

int detab(char newline[], char line[], int tab)
{
	int i, j, m;

	i = j = 0;
	while (line[i] != '\0') {
		if (line[i] == '\t')
			for(m = 0; m < tab; ++m) {
				newline[j] = ' ';
				++j;
			}
		else {
			newline[j] = line[i];
			++j;
		}
		++i;
	}
	newline[j] = '\0';
	return j;
}
