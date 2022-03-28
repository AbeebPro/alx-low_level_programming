#include "main.h"
/**
 * _strchr - search for the first occurrence of a char in a string
 * @s: char pointer
 * @c: char parameter
 *
 * Return: returns a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (0);
}
