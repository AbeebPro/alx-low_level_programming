#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - As stated
 * @n: A formal parameter of int type
 *
 * Return: returns natural numbers
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
