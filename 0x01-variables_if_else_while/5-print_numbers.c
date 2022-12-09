#include <stdio.h>
/**
 * main - main block
 * Description: printing numbers one to nine
 * Return: 0
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
