#include "main.h"
/**
 * reverse_array- reverses an array
 * @a: pointer to an int
 * @n: number of array items
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
