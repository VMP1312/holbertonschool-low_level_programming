#include "holberton.h"

/**
 * read_textfile - reads a text file & prints it to the POSIX standard output.
 * @filename: Filename.
 * @Letters: # of letters to print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int op, rd, wr;
	char *buf;

	buf = malloc(sizeof(*buf) * letters);

	if (filename == NULL || buf == NULL)
		return (0);



	/*OPEN*/

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	/*READ*/

	rd = read(op, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(op);
		return (0);
	}

	/*WRITE*/

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		free(buf);
		close(op);
		return (0);
	}

	free(buf);
	close(op);
	return (wr);
}
