#include "lists.h"
/**
 * list_len - Function to return absolute values.
 * @h: the number to be checked
 * Return:  of i
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
