#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: pointer to the first int
 * @n: pointer to the second int
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
