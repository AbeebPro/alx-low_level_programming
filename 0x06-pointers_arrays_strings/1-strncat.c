#include "main.h"
/**
 * _strncat - Concatenates specified string
 * @dest: destination string
 * @src: source string
 * @n: integer
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len1 = 0;
	int j = 0, len2 = 0, k;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	while (src[j] != '\0')
	{
		len2++;
		j++;
	}
	if (n > len2)
		n = len2;
	for (k = 0; k < n; k++)
	{
		dest[len1 + k] = src[k];
	}
	return (dest);
}
