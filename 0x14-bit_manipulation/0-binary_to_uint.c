#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (lb)
		return (0);

	for (i = 0; b[i]; i++)
	{
		value = value << 1;
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}

