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
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (c == *(s + i))
			s = (s + i);
	}
	return (s);
}
