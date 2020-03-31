#include "holberton.h"
/**
 * main - Copies the content of a file to another file.
 * @argc: Argc.
 * @argv: Argv.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char buf[MAX_BUF];
	int f1, f2, rd, wr;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	f1 = open(argv[1], O_RDONLY);

	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	for (; rd != MAX_BUF ;)
	{
		rd = read(f1, buf, MAX_BUF);
		wr = write(f2, buf, rd);
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (wr == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (close(f1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	if (close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}
