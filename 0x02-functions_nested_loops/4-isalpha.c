#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: a formal parameter of type int
 *
 * Return: Returns 1 if alphabet otherwise returns 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int num = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower)
			num = 1;
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
			num = 1;
	}
	return (num);
}
