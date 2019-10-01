#include "holberton.h"

/**
  *rev_string - function to print the string in  reverse
  *@s: The character to print
  * Return: nothing.
  */

void rev_string(char *s)
{
	int l = 0, c;
	char *begin, *end, temp;

	begin = s;
	end = s;

	while (s[l] != '\0')
		l++;

	for (c = 0; c < l - 1; c++)
		end++;

	for (c = 0; c < l / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
