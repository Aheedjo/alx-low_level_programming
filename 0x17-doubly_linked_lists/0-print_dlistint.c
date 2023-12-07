#include "lists.h"

/**
* print_dlistint - a function that prints all the elements of a dlistint_t
* @h: the head of the doubly linked list to be traversed
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t count = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
