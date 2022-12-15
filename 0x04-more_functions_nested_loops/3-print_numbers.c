#include "main.h"

/**
 * print_numbers - print num from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	char i;
	i = '0';

	while (i < 10)
	{
		_putchar("%d", i);
		i++;
	}
	_putchar('\n');
}
