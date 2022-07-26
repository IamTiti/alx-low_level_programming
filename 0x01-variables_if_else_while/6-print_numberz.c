#include <stdio.h>
/**
 * main - print 0-9
 *
 * Return: 0
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
	putchar(ch);
	ch++;
	}
	putchar("\n");
	return (0);
}
