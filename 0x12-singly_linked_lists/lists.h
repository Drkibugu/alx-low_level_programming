#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s -  This is a singly linked list
 * @str: string - (malloc'ed string)
 * @len: This is the length of the string
 * @next: This points to the next node
 * Drkibugu
 * Description: This singly linked list node structure
 * for the Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);

#endif
