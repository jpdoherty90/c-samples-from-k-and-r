#include <stdio.h>

int atoi(char str[]);

int main()
{
    printf("%d\n", atoi("25"));
    return 0;
}

// Converts a string of digits into its numeric equivalent
int atoi(char str[])
{
    int i, n;
    n = 0;
    for (i = 0; str[i] >= '0' && str[i] <= '9'; i++)
        n = 10 * n + (str[i] - '0');
    
    return n;
} 

// The expression str[i] - '0' gives the numeric value of the character.