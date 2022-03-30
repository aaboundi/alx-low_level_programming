#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y.
 * @x: first integer
 * @y: second integer
 * Description : using _pow_recursion function
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
