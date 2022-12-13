#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: the number of sign to be printed
 * Return: 1 if number is greater than zero
 * 0 if number is zero
 * -1 if number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+\n");
		return (1);
	}
	else if (n < 0)
	{
		_putchar("-\n");
		return (-1);
	}
	else
	{
		_putchar("0\n");
		return (0);
	}
}
