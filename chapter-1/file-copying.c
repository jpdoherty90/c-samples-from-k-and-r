#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
		// printf("\n%d\n", EOF);
		// printf("\n%d\n", getchar() != EOF);
	}

	return 0;
}