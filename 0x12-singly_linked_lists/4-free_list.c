#include <stdlib.h>
#include "lists.h"
/**
 * free_list - freeing a linked list
 * @head:The head of the linked list
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
