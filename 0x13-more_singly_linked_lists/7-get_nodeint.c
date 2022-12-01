#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the nth node of a linked list.
 *
 * @head: pointer to linked list of type listint_t.
 * @index: index of the node.
 * Return: nth node if its index is found, else NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    if (head == NULL)
        return (NULL);

    unsigned int node;

    for (node = 0; node < index; node++)
    {
        if (head == NULL)
            return (NULL);

        head = head->next;
    }

    return (head);
}
