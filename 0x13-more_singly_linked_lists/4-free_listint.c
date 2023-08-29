#include "lists.h"

/**
 * free_listint - This usually frees a linked list in the code
 * @head: Represents the listint_t list to be freed in the code
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
