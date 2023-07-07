#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * set_bit - Sets the value of a bit to 1 at a given index
  * @n: no to modify
  * @index: The index
  *
  * Return: ...
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}

