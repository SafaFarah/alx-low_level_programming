#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: pointer to head of list
 *
 * Return: The address of the node (start of loop), or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast;
	listint_t *slow;

	fast = head;
	slow = head;

	if (head == NULL)
		return (NULL);
	while (fast != NULL && slow != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
