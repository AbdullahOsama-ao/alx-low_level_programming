#include "main.h"

/**
 * create_file - file_creating
 * @filename: po. to name of the file will be created.
 * @text_content: po to str for writting to a file.
 *
 * Return: func fails_-1,  Otherwise_1.
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
