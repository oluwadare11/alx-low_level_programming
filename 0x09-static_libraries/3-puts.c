#include "main.h"

/**
 * _puts - Prints a string
  * @s: The string to print
  *
  * Return: void
  */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
