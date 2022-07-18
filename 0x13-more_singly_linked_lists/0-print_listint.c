#include "lists.h"
/**
 * print_listint - Function add node to end of linked list
 * @h: the pointer of pointer to the previous node
 * Return:  size_t
 */
size_t print_listint(const listint_t *h)
{
	int lenght = 0;

	while (h)
	{
		printf("%d\n", h->n);
		lenght++;
		h = h->next;
	}

	return (lenght);
}
