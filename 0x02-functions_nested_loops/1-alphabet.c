#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alwaus 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
