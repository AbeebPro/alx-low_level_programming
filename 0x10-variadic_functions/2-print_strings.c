#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: delimiter
 * @n: n args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char*);

		if (separator == NULL)
			printf("%s", s);
		else if (s == NULL)
			printf("(nil)");
		else if (i == (n - 1))
			printf("%s", s);
		else
			printf("%s%s", s, separator);
	}
	printf("\n");
	va_end(args);
}
