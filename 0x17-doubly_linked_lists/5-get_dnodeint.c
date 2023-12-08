#include "lists.h"

/**
* get_dnodeint_at_index - a function that gets node at index
* @head: a pointer to the head of the DLL
* @index: the index at which the node should be found
*
* Return: returns the node gotten, if the node does not exist, return NULL
*/


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (count == index)
		return (temp);
	else
		return (NULL);
}
