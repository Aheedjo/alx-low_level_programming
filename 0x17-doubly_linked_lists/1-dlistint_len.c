#include "lists.h"

/**
* dlistint_len - a function to calculate the length of a doubly LL
* @h: the head of the doubly LL
*
* Return: the length
*/


size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t count = 0;

	temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
