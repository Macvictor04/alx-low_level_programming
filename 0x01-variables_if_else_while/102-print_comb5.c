#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return:0
 */
int main(void)
{
	int i = 0;
	int j, k;
	int count = 0;

	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (count != 119)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
				count++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
