#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: A pointer to a char
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = (len - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
