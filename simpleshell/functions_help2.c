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
	free(head);
}

/**
* string_nconcat - concatenates two strings.
* @s1: The first string to print.
* @s2: The second string to print.
* @n: size of the size limit of s2
* Return: The new string concatenate.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, c = n;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		c++;
	}

	a = malloc(sizeof(char) * c + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	c = 0;
	for (i = 0; s1[i]; i++)
	{
		a[c++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		a[c++] = s2[i];
	}
	a[c] = '\0';
	return (a);
}

/**
* _strcpy - copies the string pointed to by src
* @dest: copy the string
* @src: the string to copy
* Return: value to pointer dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

/**
* _strdup - returns a pointer to a newly allocated space in memory.
* @str: The string to copy.
* Return: The string copy.
*/

char *_strdup(char *str)
{
	char *dest;
	int i = 0;
	int b;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}
	i++;

	dest = malloc(sizeof(char) * i);

	if (dest == 0)
	{
		return (NULL);
	}

	for (b = 0; b <= i; b++)
	{
		dest[b] = str[b];
	}
	return (dest);
}
