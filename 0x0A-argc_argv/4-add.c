#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function
 * @argc: no of args
 * @argv: string array of args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i <= argc; i++)
	{
		if (!(isdigit(argv[argc][i])))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
