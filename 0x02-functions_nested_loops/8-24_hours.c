#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23, hours++)
	{
		for (minute = 0; minute <= 59; miute++)
		{

			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');

			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
