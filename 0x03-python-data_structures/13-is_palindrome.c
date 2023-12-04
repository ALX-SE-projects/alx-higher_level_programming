#include "lists.h"
#include <stdio.h>
/**
 * get_list_item - get item at specific index
 * @head: head of the linked list
 * @idx: index
 *
 * Return: int
 */
int get_list_item(listint_t **head, unsigned int idx)
{
	unsigned int i;
	listint_t *l = *(head);

	for (i = 0; i < idx; i++)
		l = l->next;

	return (l->n);
}
/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: head of the linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	unsigned int len = 0, half, i;
	listint_t *l = *(head);

	if (!l)
	{
		len = 0;
	}
	else
	{
		while (1)
		{
			len++;
			if (l->next)
				l = l->next;
			else
				break;
		}
	}
	if (len == 0 || len == 1)
		return (1);
	half = (len - (len % 2)) / 2;
	for (i = 0; i < half; i++)
	{
		if (get_list_item(head, i) != get_list_item(head, len - 1 - i))
			return (0);
	}
	return (1);
}
