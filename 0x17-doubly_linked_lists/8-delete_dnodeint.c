#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete a node at index position of a linked list
 * @head: pointer to head in function
 * @index: index or position to be added
 * Return: 1 if success or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int nodes;

	if (head == NULL || *head == NULL)
		return (-1);
	my_node = *head;

	for (nodes = 0; my_node != NULL && nodes < index; nodes++)
		my_node = my_node->next;
	if (my_node == NULL)
		return (-1);
	if (*head == my_node)
		*head = my_node->next;
	if (my_node->next != NULL)
		my_node->next->prev = my_node->prev;
	if (my_node->prev != NULL)
		my_node->prev->next = my_node->next;
	free(my_node);
	return (1);
}
