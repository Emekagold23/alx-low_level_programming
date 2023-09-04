#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file print to POSIX STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: the actual number of bytes read and printed
 * 0 if filename is NULL,
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t fd;
	ssize_t w;
	ssize_t t;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
