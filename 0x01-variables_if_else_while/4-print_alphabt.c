#include <stdio.h>
/**
 * main - main block
 * Description: print lower case
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

		putchar('\n');
		return (0);
}
