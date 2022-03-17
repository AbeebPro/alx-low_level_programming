#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * @c: a parameter of type int
 *
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	int ch;
	int upper = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
			upper = 1;
		else
			upper = 0;
	}
	return (upper);
}
