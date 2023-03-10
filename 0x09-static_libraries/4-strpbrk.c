#include "main.h"

/**
 * _strpbrk - search a string for bytes
 * @s: source string
 * @accept: characters to be accepted
 *
 * Return: the string with accepted chars
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}

