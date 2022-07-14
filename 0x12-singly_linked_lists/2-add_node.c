#include "lists.h"
/**
 * add_node - Function to return absolute values.
 * @head: the pointer of pointer to the previous node
 * @s: string valus of the new node
 * Return:  newly created list_t node
 */
list_t *add_node(list_t **head, const char *s)
{
	int i = 0, lenght = 0;
	list_t *new = malloc(sizeof(list_t));

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
	new->next = (*head);
	(*head) = new;
	return (*head);
}
