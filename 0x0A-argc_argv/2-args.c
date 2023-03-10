#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	
	int i;
	{
		for (i = 1; i <= argc; i++)
			printf("%d\n", argv[i]);
		return (0);

	}
}
