#include "main.h"
/**
 * _puts - prints a string
 * @str: A pointer to a char
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0, len = 0;

	while (str[i] != 0)
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

