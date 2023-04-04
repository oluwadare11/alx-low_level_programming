#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sum of all data n
  * @head: ...
  *
  * Return: ...
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
