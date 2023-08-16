#include "3-calc.h"

int op_add(int f, int g);
int op_sub(int f, int g);
int op_mul(int f, int g);
int op_div(int f, int g);
int op_mod(int f, int g);

/**
* op_add - to returns the sum of 2 numbers.
* @f: The first variable char.
* @g: The second variable char.
*
* Return: sum of f and g.
*/
	int op_add(int f, int g)
{
	return (f + g);
}

/**
* op_sub -  difference of two numbers.
* @f: first variable.
* @g: second variable.
*
* Return: difference of f and g.
*/
int op_sub(int f, int g)
{
	return (f - g);
}

/**
* op_mul - Returns plus of two numbers.
* @f: first variable.
* @g: second variable.
*
* Return: product of f and g.
*/

	int op_mul(int f, int g)
{
	return (f * g);
}

/**
* op_div - Return division of two variables.
* @f: first variables.
* @g: second variables.
*
* Return: The quotient of f and g.
*/

	int op_div(int f, int g)
{
	return (f / g);
}

/**
* op_mod - Return remainder of division of two variables.
* @f: first variables.
* @g: second variables.
*
* Return: The remainder of division of f by g.
*/
	int op_mod(int f, int g)
{
	return (f % g);
}

