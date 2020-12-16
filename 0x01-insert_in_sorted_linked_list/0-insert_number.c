#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_node -  function that inserts a number
 * into a sorted singly linked list
 * @head: pointer to head of list
 * @number: number of node to be inserted
 * Return: address of the new node
 */
listint_t *insert_node(listint_t **head, int number)
{

	listint_t *newNode, *temp;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = number;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			if (temp->next->n < newNode->n)
				temp = temp->next;
			else
				break;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
