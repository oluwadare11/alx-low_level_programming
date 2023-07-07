#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * clear_bit - Sets the value at a given index
  * @n: The number to modify
  * @index: The index to modigy
  *
  * Return: ...
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}

