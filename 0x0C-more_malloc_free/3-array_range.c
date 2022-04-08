#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, diff;
	int *arr_range;

	if (min > max)
		return (NULL);
	diff = max - min;
	arr_range = malloc(sizeof(int) * diff + 1);
	if (arr_range == NULL)
		return (NULL);
	for (i = 0; i <= diff; i++)
		arr_range[i] = min++;
	return (arr_range);

}
