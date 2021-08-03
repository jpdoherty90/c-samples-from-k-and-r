#include <stdio.h>

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
    {
        return c;
    }
}

int main()
{
    // printf("%c\n", lower('R'));
    // printf("%c\n", lower('r'));
    printf("hello, world\n");
    // return 0;
}