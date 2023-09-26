#include "lists.h"

/**
 * check_cycle -  a function checks if a singly linked list has a cycle in it.
 * @list: pointer to head of list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
        listint_t *current;

        if (list == NULL)
                return (0);
        current = list;
        while (current != NULL && list != NULL && list->next != NULL)
        {
                current = current->next;
                list = list->next->next;
                if (current == list)
                        return (1);
        }
        return (0);
}
