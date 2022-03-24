#include "main.h"
/**
 * string_toupper- converts a string to upper case
 * @str: a char pointer
 *
 * Return: a pointer
 */
char *string_toupper(char *str)
{
	int i = 0, j, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j < len; j++)
	{
		if (str[j] == ' ')
			str[j] = 32;
		else if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = str[j] - 32;
		else
			str[j] = str[j];
	}
	return (str);
}
