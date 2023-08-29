#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This usually counts the number of unique nodes
 * Drkibugu
 * @head: The pointer to the head of the listint_t to check.
 * Drkibugu
 * Return: If the list is not looped - 0.
 * Otherwise - Represents the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *eagle, *mouse;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	eagle = head->next;
	mouse = (head->next)->next;

	while (mouse)
	{
		if (eagle == mouse)
		{
			eagle = head;
			while (eagle != mouse)
			{
				nodes++;
				eagle = eagle->next;
				mouse = mouse->next;
			}

			eagle = eagle->next;
			while (eagle != mouse)
			{
				nodes++;
				eagle = eagle->next;
			}

			return (nodes);
		}

		eagle = eagle->next;
		mouse = (mouse->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - This prints a listint_t list
 * @head: Represents a pointer to the head of the listint_t list
 * Drkibugu
 * Return: Returns the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
