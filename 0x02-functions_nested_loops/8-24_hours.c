#include "main.h"
/**
 * jack_bauer - the function.
 *
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int I;
	int J;

	for (I = 00; I < 24; I++)
	{
		for (J = 00; J < 60; J++)
		{
			if (J < 60)
			{
				_putchar (I / 10 + '0');
				_putchar (I % 10 + '0');
				_putchar (':');
				_putchar (J / 10 + '0');
				_putchar (J % 10 + '0');
				_putchar ('\n');
			}
		}
	}
}
