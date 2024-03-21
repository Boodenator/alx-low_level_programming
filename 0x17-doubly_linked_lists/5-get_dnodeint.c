#include "lists.h"
/**
 * get_dnodeint_at_index - function to return the nth nod of a linked list.
 * @head: pointer to first node
 * @index: node index
 * Return: return the nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h_ptr = NULL;

	if (head == NULL)
		return (NULL);
	h_ptr = head;
	for (i = 0; h_ptr != NULL; i++)
	{
		if (index == 0)
			return (h_ptr);
		h_ptr = h_ptr->next;
		if (i == (index - 1) && index != 0)
		{
			return (h_ptr);
		}
	}
	return (NULL);
}
