#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar("%d", i);
		i++;
	}
	_putchar("\n");
}
