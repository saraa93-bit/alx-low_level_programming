#include "lists.h"

/**
* free_list - Frees a list
* @head: A pointer to the head of list
*
*/

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
