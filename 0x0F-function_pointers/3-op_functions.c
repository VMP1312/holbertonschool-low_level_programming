#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add ints
 * @a: number
 * @b: number
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract ints
 * @a: number
 * @b: number
 * Return: substract
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul ints
 * @a: number
 * @b: number
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div ints
 * @a: number
 * @b: number
 * Return: div
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo between ints
 * @a: number
 * @b: number
 * Return: modulo
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
