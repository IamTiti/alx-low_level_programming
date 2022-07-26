#include<stdio.h>

/**
 * main - Print alphabet, lower & upper cases
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char cap = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
