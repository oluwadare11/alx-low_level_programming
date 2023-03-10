#include "main.h"
#include <stdio.h>

/**
 * main - prints multiplication of two ints
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)

	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", 1 * j);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);

}
