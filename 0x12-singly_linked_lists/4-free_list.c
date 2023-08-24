#include <stdlib.h>
#include "lists.h"

/**
* free_list - This normally frees a linked list
* @head: list_t this is the list to be freed
* Drkibugu
*/
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
