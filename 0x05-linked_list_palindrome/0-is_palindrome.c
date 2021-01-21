#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: is a pointer to the head of the list
 * Return: void
 */
void reverse(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

listint_t *findMiddle(listint_t **head) {
  listint_t *fast = *head;
  listint_t *slow = *head;

  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }

  return (slow);
}

/**
 * compareLists - function that compares two lists.
 * @head: is a pointer to the head of the list
 * @middle: is a pointer to the middle of the list
 * Return: void
 */
int compareLists(listint_t **head, listint_t *middle) {
  while (middle != NULL) {
    if (middle->n != (*head)->n)
      return (0);
    *head = (*head)->next;
    middle = middle->next;
  }
  return (1);  
}

/**
 * is_palindrome - function that checks if a singly linked list
 * is palindrome. An empty list is considered a palindrome
 * @head: pointer to pointer of first node of listint_t list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head) {
  listint_t *middle = NULL;

  if (head == NULL)
    return (0);

  if (*head == NULL)
    return (1);

  middle = findMiddle(head);
  reverse(&middle);
  if (compareLists(head, middle) == 1)
    return (1);
  return (0);
}


/* Alternative solution storing in an array and compering its head and tail*/

// /**
//  * is_palindrome - function that checks if a singly linked list
//  * is palindrome. An empty list is considered a palindrome
//  * @head: pointer to pointer of first node of listint_t list
//  * Return: 0 if it is not a palindrome, 1 if it is a palindrome
//  */
// int is_palindrome(listint_t **head) {
//   listint_t *aux = NULL;
//   int count = 1, *array = NULL, i = 0, palindrome = 1;

//   if (head == NULL)
//     return (0);

//   if (*head == NULL)
//     return (1);

//   aux = *head;
//   while (aux->next != NULL) {
//     count += 1;
//     aux = aux->next;
//   }
//   /* separate the space in memory for the array*/
//   array = malloc((count) * sizeof(int));

//   /* fill the array with the content of the linked list*/
//   aux = *head;
//   i = 0;
//   while (aux->next != NULL) {
//     array[i] = aux->n;
//     aux = aux->next;
//     i++;
//   }
//   array[i] = aux->n;

//   /* compare the two parts of the array starting from
//    the head and the tail at the same time till the middle */

//   i = 0;
//   while (i < count && palindrome == 1) {
//     if (array[i] != array[count - 1 - i]) {
//       palindrome = 0;
//     }
//     i++;
//   }

//   free(array);
  
//   return (palindrome);
// }
