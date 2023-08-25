#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Description: Prints the number of nodes in the linked list and the value of each node.
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
        size_t s = 0;

        /* Iterate over the linked list */
        while (h)
        {
                /* Print the node's data */
                if (!h->str)
                        printf("[0] (nil)\n");
                else
                        printf("[%u] %s\n", h->len, h->str);

                /* Move to the next node */
                h = h->next;
                s++;
        }

        return (s);
}
