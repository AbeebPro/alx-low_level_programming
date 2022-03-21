#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integer.
 * @a: a pointer to int
 * @n: a formal parameter
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
