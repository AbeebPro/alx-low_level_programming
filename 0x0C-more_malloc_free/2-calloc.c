#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(str + i) = 0;
	return (str);
}
