#include "main.h"
/**
 * puts2 - Prints every other char in a string
 * @str: a pointer to a str
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
	{
		if ((i != 1 && i / 2 == 0) || i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
