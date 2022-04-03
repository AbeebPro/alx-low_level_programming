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
	int i = 0, val = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			val = s1[i] - s2[i];
			break;
		}
		else
			val = 0;
	}
	return (val);
}
