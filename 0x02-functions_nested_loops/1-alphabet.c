#include "main.h"

/**
 * print alphabet - entry point
 *
 * Return: Always 0.
 **/

void print_alphabet(void)
{

	char la = 'a';

	while (la <= 'z')
	{
		_putchar(la);
		la++;
	}

	_putchar("\n");
}
