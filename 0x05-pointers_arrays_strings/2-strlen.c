#include "main.h"
/**
 * _strlen: Gives the length of a string
 * @char: A pointer to a char
 *
 * Return: An integer
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while(s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
