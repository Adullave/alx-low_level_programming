#include "main.h"

/*
 * _pow_recursion - Raises to power
 * @x: Base number
 * @y: power
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return x * _pow_recursion(x, y - 1);
}