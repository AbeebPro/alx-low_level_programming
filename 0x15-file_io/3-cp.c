#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fdo_1, fdo_2, fdr, fdw, clfdo, clfdo2;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdo_1 = open(argv[1], O_RDONLY);
	if (fdo_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdo_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdo_2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
	fdr = read(fdo_1, buff, 1024);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buff[fdr] = '\0';
	fdw = write(fdo_2, buff, fdr);
	if (fdw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	clfdo = close(fdo_1);
	clfdo2 = close(fdo_2);
	if (clfdo < 0 || clfdo2 < 0)
	{
		if (clfdo < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo_1);
		if (clfdo2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo_2);
		exit(100);
	}
	return (0);
}
