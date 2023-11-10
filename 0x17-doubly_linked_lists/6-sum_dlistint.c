#include "lists.h"

/**
 * sum_dlistint - sums all numbers in the list
 * @head: the head pointer to list
 * Return: returns the total sum of numbers
*/


int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	else
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
