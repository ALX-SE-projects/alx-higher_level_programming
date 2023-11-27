#include "lists.h"
/* for task #14 */
/**
 * choook - check if node loops
 * @head: first node of list
 * @ptr: node to check
 * @until: idx to stop checking at
 * Return: bool
 */
unsigned int choook(listint_t *head, const void *ptr, int until)
{
	const listint_t *l = &(*head);
	int i;

	for (i = 0; i < until; i++)
	{
		if (ptr == l)
			return (1);
		l = l->next;
	}
	return (0);
}
/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * list: head of list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *l = &(*list);
	unsigned int count = 0;

	if (list)
	{
		while (l)
		{
			count++;
			if (choook(list, l, count - 1))
			{
				return (1);
			}
			if (l->next)
				l = l->next;
			else
				break;
		}
	}
	return (0);
}
