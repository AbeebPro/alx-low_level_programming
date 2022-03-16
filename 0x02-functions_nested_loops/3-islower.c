#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: a formal parameter of int type
 * Return: 1 if lowercase and 0 if uppercase
 */
int _islower(int c)
{
	char ch;
	int lower = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
			lower = 1;
	}
	return (lower);
}
