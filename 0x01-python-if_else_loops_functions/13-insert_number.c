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
	listint_t *add_after_me = NULL, *add_before_me, *original_head;

	if (!new_item)
		return (NULL);
	original_head = *head;
	new_item->n = number;
	/* if list is empty */
	if (original_head == NULL)
	{
		*head = new_item;
		new_item->next = NULL;
		return (new_item);
	}
	/* find the location where new_item will be locacted */
	while (1)
	{
		if (original_head->n < number)
		{
			add_after_me = original_head;
			if (original_head->next != NULL)
				original_head = original_head->next;
			else
			{
				add_before_me = NULL;
				break;
			}
		}
		else
		{
			add_before_me = original_head;
			break;
		}
	}
	if (add_after_me)
		add_after_me->next = new_item;
	else
	{
		/* insert node at the begaining */
		*head = new_item;
	}
	new_item->next = add_before_me;
	return (new_item);
}
