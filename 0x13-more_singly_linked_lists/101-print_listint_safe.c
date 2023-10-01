#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of list.
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_num;
	size_t idx = 0;

	node_num = loop_nodes(head);
	if (node_num == 0)
	{
		for (; head != NULL; node_num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < node_num; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node_num);
}

/**
 * loop_nodes - Counts the number of nodes in linked list loop.
 * @head: A pointer to the head of linked list.
 *
 * Return: numbet of nodes in loop.
 */
size_t loop_nodes(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow = head->next;
	fast = head->next->next;
	while (fast != NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
