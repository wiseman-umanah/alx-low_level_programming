#include "lists.h"

/**
* sum_listint - prints the sum of numbers in linked list
* @head: pointer to linked list
* Return: returns pointer to linked list
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
