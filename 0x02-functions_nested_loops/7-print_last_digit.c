#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int la;

	la = n % 10;


	if (la < 0)
		la = la * -1;
	_putchar(la + '0');



	return (la);
}
