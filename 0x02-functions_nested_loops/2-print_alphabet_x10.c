#include "main.h"
/**
 * print alphabet - ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int alpha;

	for (i = 0; i < 10; i++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
	}
}
