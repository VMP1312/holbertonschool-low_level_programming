#include "holberton.h"

/**
 * create_file - That creates a file.
 * @filename: Filename.
 * @text_content: text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, count;


	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (op == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
		;

	wr = write(op, text_content, count);
	if (wr == -1)
	{
		close(op);
		return (1);
	}

	close(op);
	return (1);
}
