#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: no. of arguments
 * @argv: string array cobtaining arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
