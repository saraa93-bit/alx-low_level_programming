#include "lists.h"
#include <stdlib.h>

/**
* _strlen - gets length of the string
* @s: string
* Return: the string length.
*/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)

	return (i);
}
/**
* add_node - add new nodes to the list
* @head: current place in the list
* @str: a string to add to the head
* Return: pointer to the current position in list
*/
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *cont;
	list_t *list;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	list = *head;
	cont = malloc((len + 1) * sizeof(char));
	if (cont == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cont[i] = str[i];
	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		free(cont);
		return (NULL);
	}
	list->str = cont;
	list->len = len;
	list->next = *head;
	*head = list;
	return (list);
}
