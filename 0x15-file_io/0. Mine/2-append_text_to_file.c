#include "main.h"

/**
 * append_text_to_file - app. at ends_files created.
 * @filename: po. to name_file will be created.
 * @text_content: po. to str will be added to flie_end.
 *
 * Return: If func fails or filename is NULL_-1.
 * If a  file doesnt exist user cant write permissions_ -1.
 * Otherwise_1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int o, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
