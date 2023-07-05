#include "lists.h"

/**
 * pop_listint - Erases the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: All data inside the elements that was formerly erased
 * or 0 if there is an empty list
 */
int pop_listint(listint_t **head)
{
listint_t *tempo;
int number;

if (!head || !*head)
return (0);

number = (*head)->n;
tempo = (*head)->next;
free(*head);
*head = tempo;

return (number);
}
