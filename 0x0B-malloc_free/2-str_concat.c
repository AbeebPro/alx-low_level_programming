#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenate 2 strings
 * @s1: ist string
 * @s2: 2nd string
 * Return: address of concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (*(s1 + len1))
	{
		len1++;
	}
	if (s2 == NULL)
		s2 = "";
	while (*(s2 + len2))
	{
		len2++;
	}
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i <= (len1 + len2 + 1); i++)
	{
		if (i < len1)
		{
			s3[i] = *s1;
			s1++;
		}
		else
		{
			s3[i] = *s2;
			s2++;
		}
	}
	return (s3);
}
