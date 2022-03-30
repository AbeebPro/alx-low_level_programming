#include "main.h"
/**
 * factorial - Prints a factorial
 * @n: an int param
 *
 * Return: an int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
