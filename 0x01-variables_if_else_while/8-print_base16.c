#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return:0
 */

int main(void)
{
	char ch = 'a';

	int n = '0';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
