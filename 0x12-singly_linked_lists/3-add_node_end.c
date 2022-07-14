#include "lists.h"
/**
 * add_node_end - Function add node to end of linked list
 * @head: the pointer of pointer to the previous node
 * @s: string valus of the new node
 * Return:  new end node to list
 */
list_t *add_node_end(list_t **head, const char *s)
{
	int i = 0, lenght = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		lenght++;
		i++;
	}
	new->str = strdup(s);
	new->len = lenght;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (new);
}
