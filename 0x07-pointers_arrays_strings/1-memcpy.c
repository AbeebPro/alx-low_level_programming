#include "main.h"
/**
 * _memcpy - copies from one memory location to another
 * @dest: destination memory address
 * @src: src memory address
 * @n: number of items to copy
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;
	char *s = src;

	for (i = 0; i < n; i++)
	{
		*(p + i) = *(s + i);
	}
	return (p);
}
