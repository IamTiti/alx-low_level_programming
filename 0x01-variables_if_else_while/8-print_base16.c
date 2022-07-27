#include <stdio.h>

/**
 * main - print hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
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
