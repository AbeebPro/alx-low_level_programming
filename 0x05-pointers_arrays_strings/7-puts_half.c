#include "main.h"
/**
 * puts_half - prints the other half of a string
 * @str: a pointer to a string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i = 0, len = 0, j;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
	{
		for (j = (len / 2); j <= len; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (len / 2 + 1); j <= len; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
