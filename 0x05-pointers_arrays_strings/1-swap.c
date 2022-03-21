#include "main.h"
/**
 * swap_int - swap two numbers
 * @a: pointer to an int
 * @b: pointer tonan int
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
