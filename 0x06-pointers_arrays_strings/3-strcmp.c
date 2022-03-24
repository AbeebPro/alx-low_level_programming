#include "main.h"
/**
 * _strcmp - conpares two strings
 * @s1: string
 * @s2: string
 *
 * Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, len = 0, j = 0, len2 = 0, val = 0;

	while (s1[i] != '\0')
	{
		len++;
		i++;
	}
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	for (i = 0; i < len; i++)
	{
		if (s1[i] > s2[i])
		{
			val = 15;
			break;
		}
		else if (s2[i] > s1[i])
		{
			val = -15;
			break;
		}
		else if (s1[i] == s2[i])
		{
			val = 0;
			break;
		}
	}
	return (val);
}
