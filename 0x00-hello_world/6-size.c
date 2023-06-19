#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer.
 * Return: 0
 */

int main(void)
{
	printf("size of a char:%zu byte(s)", sizeof(char));
	printf("size of am int:%zu byte(s)", sizeof(int));
	printf("size of a long int:%zu byte(s)", sizeof(long int));
	printf("size of a long long int:%zu byte(s)", sizeof(long long int));
	printf("size of a float:%zu byte(s)", sizeof(float));

	return (0);
}
