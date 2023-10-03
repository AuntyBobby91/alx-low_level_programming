#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file print to STDOUT.
 * @filename: text file should be read
 * @letters: number of letters read
 * Return: w- actual number of bytes that will be read and printed out
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	k = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, k);

	free(buf);
	close(fd);
	return (a);
}

