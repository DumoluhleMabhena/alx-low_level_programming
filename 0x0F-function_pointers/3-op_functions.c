#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Reture sum of two numbers.
 * @a: The fnumber.
 * @b: The secomber.
 *
 * Return: The sua and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Retuhe difference of two numbers.
 * @a: The fnumber.
 * @b: The secumber.
 *
 * Return: Therence of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Rethe product of two numbers.
 * @a: The fnumber.
 * @b: The secumber.
 *
 * Return: Thect of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Retur division of two numbers.
 * @a: The fst number.
 * @b: The senumber.
 *
 * Return: The t of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Retue remainder of the division of two numbers.
 * @a: The st number.
 * @b: The secumber.
 *
 * Return: Thr of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
