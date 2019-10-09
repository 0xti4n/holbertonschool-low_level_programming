#include "holberton.h"

/**
* set_string - Sets the value of a pointer to a char.
* @s: The place where the string is replaced.
* @to: The string to copy.
* Return: Nothing.
*/
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] != '\0'; i++)
		*s = to;
}
