#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates the first occurence of a string
 * @s: string pointer
 * @accept: string pointer
 *
 * Return: returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
