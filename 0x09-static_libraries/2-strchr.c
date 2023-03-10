#include "main.h"

/**
 * _strchr - locate character in the string
 * @s: source of the string
 * @c: character to be found
 *
 * Return: the character from string found
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
