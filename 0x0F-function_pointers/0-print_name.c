#include <stdio.h>

/**
 * print_name -  a function that prints a name
 * @name: string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(*f)(name);
}
