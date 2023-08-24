#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - This  adds a new node at the beginning of a linked list
* @head: This is the double pointer to the list_t list
* @str: This is a new string to add in the node
* Drkibugu
* Return: the address of the new element and NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}
