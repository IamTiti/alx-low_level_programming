#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: c is the variable for the program.
 * Return: 0
 */
int _isalpha(int c)
{

	if (('z' > c && c > 'a') || ('Z' > c && c > 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
