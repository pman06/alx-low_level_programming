#include "lists.h"
/**
 * add_nodeint - Function to return absolute values.
 * @head: the pointer of pointer to the previous node
 * @n: integer value of the new node
 * Return:  newly created list_t node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
