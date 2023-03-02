#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: source string
 * Return: a pointer to the resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int dln = 0, i;

	while (dest[dln])
	{
		dln++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dln] = src[i];
		dln++;
	}

	dest[dln] = '\0';
	return (dest);
}
