#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return:0
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
