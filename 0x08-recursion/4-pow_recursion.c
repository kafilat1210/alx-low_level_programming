#include "main.h"

/**
 *_pow_recursion - return the value x raised to power y
 *@x: number of value
 *@y: number of power
 *
 *Return: x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
