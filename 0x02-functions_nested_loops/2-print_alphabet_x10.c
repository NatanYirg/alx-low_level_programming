#include "main.h"

/**
 * print alphabet - entry point.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c = 0;

	while (c < 10)
	{
		char la = 'a';

		while (la <= 'z')
		{
			_putchar(la);
			la++;
		}
		_putchar('\n');
		c++;
	}
}
