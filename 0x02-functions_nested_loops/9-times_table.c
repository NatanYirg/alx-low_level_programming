#include "main.h"

/**
 * times_table - print the nine tables
 */

void times_table(void)
{
	int num, mul, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mul;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
