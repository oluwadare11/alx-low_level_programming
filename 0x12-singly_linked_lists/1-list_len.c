#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Show the number of elements of a list
 * @h: pointer
 *
 * Return: ...
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
