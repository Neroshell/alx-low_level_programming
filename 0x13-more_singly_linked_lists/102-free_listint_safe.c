#include "lists.h"

/**
 * free_listint_safe - release a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the released list
 */
size_t free_listint_safe(listint_t **h)
{
size_t length = 0;
int uniq;
listint_t *tempo;

if (!h || !*h)
return (0);

while (*h)
{
uniq = *h - (*h)->next;
if (uniq > 0)
{
tempo = (*h)->next;
free(*h);
*h = tempo;
length++;
}
else
{
free(*h);
*h = NULL;
length++;
break;
}
}

*h = NULL;

return (length);
}
