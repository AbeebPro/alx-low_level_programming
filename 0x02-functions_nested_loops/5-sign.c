#include "main.h"
/**
 * print_sign - Prints + for +ve n, - for -ve n, 0 for n = 0
 * @n: A formal parameter of int type
 *
 * Return: returns a sign
 */
int print_sign(int n)
{
	int val = 0;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar('0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}
	return (val);
}
