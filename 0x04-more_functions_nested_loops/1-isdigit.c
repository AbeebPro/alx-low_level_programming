#include "main.h"
/**
 * _isdigit - Checks for digit
 * @c: A parameter of type int
 *
 * Return: 1 if digit and 0 if otherwise
 */
int _isdigit(int c)
{
	char i;
	int num = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			num = 1;
			break;
		}
	}
	return (num);
}
