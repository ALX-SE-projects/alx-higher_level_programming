#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: head of the linked list
 * @number: new item num value
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_item = malloc(sizeof(listint_t));
	listint_t *add_after_me, *add_before_me;

	if (!new_item)
		return (NULL);
	new_item->n = number;
	/* if list is empty */
	if (*head == NULL)
	{
		new_item->next = NULL;
		return (new_item);
	}
	/* find the location where new_item will be locacted */
	while (1)
	{
		if ((*head)->n < number)
		{
			add_after_me = *head;
			if ((*head)->next != NULL)
				head = &((*head)->next);
			else
			{
				add_before_me = NULL;
				break;
			}
		}
		else
		{
			add_before_me = *head;
			break;
		}
	}
	add_after_me->next = new_item;
	new_item->next = add_before_me;
	return (new_item);
}
