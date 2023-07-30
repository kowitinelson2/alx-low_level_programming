#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number to be added.
 * @b: The second number to be added.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The number to subtract from (minuend).
 * @b: The number to subtract (subtrahend).
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first factor.
 * @b: The second factor.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Returns the division result of two numbers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The quotient of a divided by b.
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
    return (a % b);
} 
