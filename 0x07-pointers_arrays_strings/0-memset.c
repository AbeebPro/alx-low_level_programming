#include "main.h"
/**
 * _memset- fills the first n bytes of the memory area pointed to s
 * with constant b
 * @s: char pointer
 * @b: specified string
 * @n: unsigned int n
 *
 * Return: Return a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
