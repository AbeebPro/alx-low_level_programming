#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: pointer to char
 * Return: address of duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
	{
		i++;
	}
	i = i + 1;
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
