#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes.
 * @argc: amount of args
 * @argv: array arguments
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
		printf("%02hhx\n ", arr[i]);
		break;
		}
	printf("%02hhx\n ", arr[i]);
	}
	return (0);
}
