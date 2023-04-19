#include "3-calc.h"

 /*
 * op_add - Returns the sum of two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * op_mul - Returns the product of two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * op_div - Returns the division of two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int num1, int num2)
{
	return (num1 / num2);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int num1, int num2)
{
	return (num1 % num2);
}
