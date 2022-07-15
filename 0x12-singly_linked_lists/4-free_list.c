#include "lists.h"
/**
 * free_list - Function to free lists_t list
 * @head: the pointer to linked lst
 * Return:  void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
