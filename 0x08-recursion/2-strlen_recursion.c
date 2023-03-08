#include "main.h"

/**
 * _strlen_recursion - return lenght of string
 * @s: string lenght to be returned
 * Return: int value
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
