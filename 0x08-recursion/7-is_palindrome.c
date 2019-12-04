#include "holberton.h"

/**
* _strlen_recursion -  returns the length of a string.
* @s: The string to count.
* Return: The count of the string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return ((1 + _strlen_recursion(s + 1)));
}

/**
* funrecur - function that searches if a string is palindrome.
* @s: The string to search.
* @a: Number to compare.
* @ln: Number to compare.
* Return: 1 if it is palindrome, 0 if not.
*/

int funrecur(char *s, int a, int ln)
{
	if (a == ln)
		return (1);

	if (s[a] != s[ln])
		return (0);

	if (a < ln + 1)
		return (funrecur(s, a + 1, ln - 1));

	else
		return (1);
}

/**
* is_palindrome - Palindrome function.
* @s: The string to evaluate.
* Return: 1 if it is a palindrome, 0 if not.
*/

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	return (funrecur(s, 0, len - 1));
}
