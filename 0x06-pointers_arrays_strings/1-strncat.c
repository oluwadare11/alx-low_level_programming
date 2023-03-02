#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination value
 * @src: string value
 * @n: the limit
 *
 * Return: a pointer to the string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dln])
	{
		dln++;
	}

	while (j < n && src[j])
	{
		dest[dln] = src[j];
		dln++;
		j++;
	}

	dest[dln + n + 1] = '\0';

	return (dest);
}
