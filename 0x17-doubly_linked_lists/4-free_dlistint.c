#include "lists.h"

/**
* free_dlistint - a function that frees a dlinkedlist
* @head: a pointer to the head of the LL
*
*/


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
