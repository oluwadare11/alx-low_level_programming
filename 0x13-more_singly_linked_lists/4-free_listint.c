#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Frees a linked list
  * @head: ...
  *
  * Return: ...
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
