#include <stdio.h>
/**
 * main - Write a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded)
 * i: Integer
 * c: Result
 * Return: 0
 *
 */
int main(void)
{
	int i;
	long a = 1, b = 2, c = 0;

	printf("1, 2");
	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %ld", c);
	}
	putchar('\n');
	return (0);
}
