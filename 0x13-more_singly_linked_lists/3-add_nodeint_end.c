#include "lists.h"
/**
 * add_nodeint_end - Function add node to end of linked list
 * @head: the pointer of pointer to the previous node
 * @n: intger valus of the new node
 * Return:  new end node to list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
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
