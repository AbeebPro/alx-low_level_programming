#include "main.h"
/**
 * _strcat- Concatenates strings
 * @dest: destination string
 * @src: source string
 *
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
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

	for (k = 0; k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}
	return (dest);
}
