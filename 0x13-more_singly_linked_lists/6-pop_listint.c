#include "lists.h"

/**
 * pop_listint - This deletes the head node of a linked list in the code
 * @head: Represents the pointer to the first element in the linked list
 * Drkibugu
 * Return: Represents the data inside the elements that was deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
