#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - adds two integer
 *@a: the first integer
 *@b: the second integer
 *Return: Returns the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subracts integers
 *@a: the first number
 *@b: the second number
 *Return: Returns the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two integers
 *@a: the first number
 *@b: the second number
 *Return: Returns the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides integers
 *@a: the first number
 *@b: the second number
 *Return: Returns the dividend
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - finds the remainder
 *@a: the first number
 *@b: the second number
 *Return: Returrns the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
