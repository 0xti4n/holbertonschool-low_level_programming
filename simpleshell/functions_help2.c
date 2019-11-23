#include "shell.h"

/**
* add_node - Add new node at the beginning of a list.
* @head: The argument.
* @str: The names to count.
* Return: The New node.
*/

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
* free_list - Frees a list.
* @head: The argument.
* Return: Nothing.
*/

void free_list(list_t *head)
{
	list_t *p = head;

	while (p)
	{
		free(head->str);
		free(head);
		p = p->next;
		head = p;
	}
}

/**
* str_concat - concatenates two strings.
* @s1: The first string to print.
* @s2: The second string to print.
* Return: The sum of two strings.
*/

char *str_concat(char *s1, char *s2)
{
	int a, b = 0;
	int i, j = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] || s2[a]; a++)
	{
		b++;
	}

	p = malloc(sizeof(char) * b);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		p[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		p[j++] = s2[i];
	}
	return (p);
}
