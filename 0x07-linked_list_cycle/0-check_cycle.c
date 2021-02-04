#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: pointer to a pointer of the start of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *aux_slow = list, *aux_fast = list;

	while (aux_slow && aux_fast && aux_fast->next)
	{
		aux_slow = aux_slow->next;
		aux_fast = aux_fast->next->next;
		if (aux_slow == aux_fast)
		{
			return (1);
		}
	}
	return (0);
}