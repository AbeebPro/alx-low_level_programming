#include "main.h"
/**
 * cap_string - Capitalozes a string
 * @str: a string
 *
 * Return: string pointer
 */
char *cap_string(char *str)
{
	int i, j;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		for (j = 0; delimeters[j] != '\0'; j++)
			if (str[i] == delimeters[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
