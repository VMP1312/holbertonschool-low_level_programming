#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: text content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, count;


	if (filename == NULL)
		return (-1);

	op = open(filename, O_APPEND | O_WRONLY);

	if (op == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (count = 0; text_content[count] != '\0'; count++)
		;

	wr = write(op, text_content, count);
	if (wr == -1)
	{
		close(op);
		return (-1);
	}

	close(op);
	return (1);
}
