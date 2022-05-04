#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *str;

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	fdr = read(fdo, str, letters);
	if (fdr < 0)
	{
		free(str);
		return (0);
	}
	str[fdr] = '\0';
	close(fdo);

	fdw = write(STDOUT_FILENO, str, fdr);
	if (fdw < 0)
	{
		free(str);
		return (0);
	}
	free(str);
	return (fdw);
}
