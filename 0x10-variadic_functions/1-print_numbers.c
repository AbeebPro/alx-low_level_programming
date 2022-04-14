#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers, followed by a new line.
* @separator: delimiter
* @n: n args
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (separator == NULL)
		{
			printf("%d", x);
		}
		else if (i == (n - 1))
		{
			printf("%d", x);
		}
		else
		{
			printf("%d%s", x, separator);
		}
	}
	printf("\n");
}
