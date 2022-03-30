#include "main.h"
/**
 * _pow_recursion - returns power of
 * @x: int param
 * @y: int param
 *
 * Return: an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
