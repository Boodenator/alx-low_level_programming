#include "lists.h"
/**
 * free_dlistint - function that frees alist.
 * @head: pointer to head in fucntion
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h_ptr;

	while (head != NULL)
	{
		h_ptr = head->next;
		free(head);
		head = h_ptr;
	}
}
