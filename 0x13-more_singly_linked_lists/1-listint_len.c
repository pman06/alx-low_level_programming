#include "lists.h"
/**
 * listint_len - Function add node to end of linked list
 * @h: the pointer of pointer to the previous node
 * Return:  size_t
 */
size_t listint_len(const listint_t *h)
{
	int lenght = 0;

	while (h)
	{
		lenght++;
		h = h->next;
	}

	return (lenght);
}
