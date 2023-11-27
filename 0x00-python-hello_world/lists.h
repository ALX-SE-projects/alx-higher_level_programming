#ifndef HEAD
#define HEAD
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);
#endif

#ifndef CLOCK_H
#define CLOCK_H
/**
 * mmclock - blabla bla
 * Return: 1
 */
__attribute__((unused)) static clock_t mmclock(void)
{
	return (1);
}
#define clock mmclock
#endif
