#include "main.h"
/**
 * print_last_digit - print last digit of number
 *
 * @r: is the Variable of the function.
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int lastdigit;

	lastdigit = r % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
