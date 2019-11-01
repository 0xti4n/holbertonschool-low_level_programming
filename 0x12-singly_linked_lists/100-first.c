#include <stdio.h>

void __attribute__((constructor)) before(void);

/**
* before - Print before main.
*
* Return: Nothing.
*/

void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
