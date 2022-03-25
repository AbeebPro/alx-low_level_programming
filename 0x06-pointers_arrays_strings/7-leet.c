#include "main.h"
/**
 * leet - changes a char to number
 * @s: a string pointer
 *
 * Return: pointer s
 */
char *leet(char *s)
{
	int i, j;

	char subs[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
		{
			if (s[i] == subs[j] || s[i] == subs[j] - 32)
				s[i] = j + '0';
		}
	}
	return (s);
}
