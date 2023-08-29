#include "lists.h"

/**
 * free_listint2 - This frees a linked list in the code
 * @head: Signals pointer to the listint_t list to be freed in the code
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
