#include <stdio.h>

/**
* before_main - Print before main.
*
* Return: Nothing.
*/

void __attribute__((constructor)) before(void);
void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
