#include <stdio.h>
#define MAXLINE 20

int getLine(char line[]);
void resetReversed(char reversed[]);
void reverse(char original[], char reversed[], int length);

int main()
{
    int len;
    char line[MAXLINE];
    char reversed[MAXLINE];
    while ((len = getLine(line)) > 0) {
        resetReversed(reversed);
        reverse(line, reversed, len);
        printf("%s\n", reversed);
    }
        
    return 0;
}

int getLine(char s[])
{
    int c, i;

    for (i=0; (c=getchar()) !=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void resetReversed(char reversed[])
{
    int i;
    for (i = 0; i < MAXLINE; ++i)
        reversed[i] = ' ';
}

void reverse(char original[], char reversed[], int length)
{
    int i = 0;
    int j = length - 2;
    while (j >= 0) {
        reversed[i] = original[j];
        ++i;
        --j;
    }
}