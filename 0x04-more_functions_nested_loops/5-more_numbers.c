#include "main.h"
/**
 * more_numbers - Prints 1 to 14 in 10 lines
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i;
	int ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
				_putchar(ch / 10 + '0');
			_putchar(ch % 10 + '0');
		}
		_putchar('\n');
	}
}
