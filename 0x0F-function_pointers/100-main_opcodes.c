#include <stdio.h>
#include <stdlib.h>
/**
* main - ...
* @argc: #arguments
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int i, b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);
	return (0);
}
