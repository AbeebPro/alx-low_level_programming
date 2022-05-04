#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_WRONLY | O_APPEND);
	if (fdo < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	fdw = write(fdo, text_content, len);
	if (fdw < 0)
		return (-1);
	close(fdo);
	return (1);
}
