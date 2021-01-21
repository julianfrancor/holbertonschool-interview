#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * is_palindrome - function that checks if a singly linked list
 * is palindrome. An empty list is considered a palindrome
 * @head: pointer to pointer of first node of listint_t list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head) {
  listint_t *aux = NULL;
  int count = 1, *array = NULL, i = 0, palindrome = 1;

  if (head == NULL)
    return (0);

  if (*head == NULL)
    return (1);

  aux = *head;
  while (aux->next != NULL) {
    count += 1;
    aux = aux->next;
  }
  /* separate the space in memory for the array*/
  array = malloc((count) * sizeof(int));

  /* fill the array with the content of the linked list*/
  aux = *head;
  i = 0;
  while (aux->next != NULL) {
    array[i] = aux->n;
    aux = aux->next;
    i++;
  }
  array[i] = aux->n;

  /* compare the two parts of the array starting from
   the head and the tail at the same time till the middle */

  i = 0;
  while (i < count && palindrome == 1) {
    if (array[i] != array[count - 1 - i]) {
      palindrome = 0;
    }
    i++;
  }

  free(array);
  
  return (palindrome);
}
