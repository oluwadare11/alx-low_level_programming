#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: no to find the index
  * @index: index to find
  *
  * Return: ...
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_i = 0;

	while (n)
	{
		if (comp_i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		comp_i++;
	}

	if (index > comp_i && index < 63)
		return (0);

	return (-1);
}

