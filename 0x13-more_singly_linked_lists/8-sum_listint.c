#include "lists.h"

/**
 * sum_listint - function that does sum of all data
 * @head: A pointer to the head of the linked list.
 *
 * Return:The sum of all data values in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
