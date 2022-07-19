#include "lists.h"
/**
 * free_listint - Function to free lists_t list
 * @head: the pointer to linked lst
 * Return:  void
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *next;

	for (temp = head; temp != NULL; temp = next)
	{
		next = temp->next;
		free(temp);
	}
}
