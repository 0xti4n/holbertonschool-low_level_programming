#include "3-calc.h"
#include <stdio.h>

/**
* op_add - Sum two numbers.
* @a: The first number.
* @b: The second number.
* Return: The integer of the function associated.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Sub two numbers.
* @a: The first number.
* @b: The second number.
* Return: The function associated
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - MUl two numbers.
* @a: The first number.
* @b: The second number.
* Return: The function associated
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Div two numbers.
* @a: The first number.
* @b: The second number.
* Return: The function associated.
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - Mod two numbers.
* @a: The first number.
* @b: The second number.
* Return: The function associated
*/

int op_mod(int a, int b)
{
	return (a % b);
}
