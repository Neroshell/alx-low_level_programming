#include "lists.h"

/**
 * add_nodeint - adds a new node at the commencement of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *fresh;

fresh = malloc(sizeof(listint_t));
if (!fresh)
return (NULL);

fresh->n = n;
fresh->next = *head;
*head = fresh;

return (fresh);
}
