#include "lists.h"

/**
 * delete_nodeint_at_index - erases a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to erase
 *
 * Return: 1 for (Success), or -1 for (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempo = *head;
listint_t *recent = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tempo);
return (1);
}

while (i < index - 1)
{
if (!tempo || !(tempo->next))
return (-1);
tempo = tempo->next;
i++;
}


recent  = tempo->next;
tempo->next = recent->next;
free(recent);

return (1);
}
