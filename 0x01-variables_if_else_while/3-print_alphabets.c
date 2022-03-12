#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowAlpha = 'a';
	char upAlpha = 'A';

	while (lowAlpha <= 'z')
		{
			putchar(lowAlpha);
			lowAlpha++;
		}

	while (upAlpha <= 'Z')
		{
			putchar(upAlpha);
			upAlpha++;
		}
	putchar('\n');
	return (0);
}
