#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, h;

	for (c = '0'; c <= '9'; c++)
	for (h = '0'; h <= '9'; h++)
	{
	putchar(c);
	putchar(h);
	if (c != '9' || h != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
