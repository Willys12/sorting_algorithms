#include "sort.h"
/**
* insertion_sort_list -  sorts a doubly linked list of integers.
* @list: Pointer to the pointer of the head of list.
* Return: Nothing.
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current = (*list)->next;
listint_t *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}

while (current != NULL)
{
temp = (*current).prev;

while (temp != NULL && (*temp).n > (*current).n)
{
if ((*temp).prev != NULL)
temp->prev->next = current;
if ((*current).next != NULL)
current->next->prev = temp;

(*temp).next = (*current).next;
(*current).prev = (*temp).prev;

(*current).next = temp;
(*temp).prev = current;

if ((*current).prev == NULL)
*list = current;

print_list(*list);

temp = (*current).prev;
}
current = (*current).next;
}
}
