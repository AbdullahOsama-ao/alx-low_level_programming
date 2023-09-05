#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- rd to stout
 * @filename: file being_read
 * @letters: nums letters will be read...
 * Return: w- the actual num of bytes
 * 0 when func to fails OR  filename  NULL...
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
