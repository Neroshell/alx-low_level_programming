#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the initial element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *fresh;
listint_t *temp = *head;

fresh = malloc(sizeof(listint_t));
if (!fresh)
return (NULL);

fresh->n = n;
fresh->next = NULL;

if (*head == NULL)
{
*head = fresh;
return (fresh);
}

while (temp->next)
temp = temp->next;

temp->next = fresh;

return (fresh);
}
