#include "lists.h"

/**
* sum_dlistint - a function that returns the sum of all the data in nodes
* @head: a pointer to the head of the linked list
*
* Return: if the list is empty, return 0 otherwise return sum
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t  *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
