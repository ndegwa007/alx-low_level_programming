#include "main.h"
#define BUF_SIZE 1024
/**
 * main - copies contents of one file to another file
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int f1, f2, res1, res2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	buffer = malloc(sizeof(char) * BUF_SIZE);

	if (buffer == NULL)
		return (0);
	f1 = open(argv[1], O_RDONLY);
	error_98(f1, buffer, argv[1]);
	f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY,  664);
	error_98(f2, buffer, argv[2]);

	do {
		res1 = read(f1, buffer, BUF_SIZE);
		if (res1 == 0)
			break;
		error_99(res1, buffer, argv[1]);
		res2 = write(f2, buffer, res1);
		error_99(res2, buffer, argv[2]);
	} while (res2 >= BUF_SIZE);

	res1 = close(f1);
	error_100(res1, buffer);
	res2 = close(f2);
	error_100(res2, buffer);
	free(buffer);
	return (0);
}

/**
 * error_98 - cannot read from src file
 * @f1: file desc
 * @buffer: buffer
 * @argv: argument
 */

void error_98(int f1, char *buffer, char *argv)
{
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}


/**
 * error_99 - cannot create the dest file
 * @f2: file desc
 * @buffer: buffer
 * @argv: argument
 */

void error_99(int f2, char *buffer, char *argv)
{
	if (f2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file %s\n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * error_100 - cannot close fd
 * @fd: file desc
 * @buffer: buffer
 */

void error_100(int fd, char *buffer)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %i\n", fd);
		free(buffer);
		exit(100);
	}
}
