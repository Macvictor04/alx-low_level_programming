#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return:0
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}


	putchar('\n');

	return(0);
}
	

