#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * @c: a parameter of type int
 *
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	char ch;
	int upper = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			upper = 1;
			break;
		}
	}
	return (upper);
}
