#include "main.h"

/**
 * append_text_to_file - Appends text at end of file.
 * @filename: Pointer to the name of the file.
 * @text_content: String to add to end of file.
 *
 * Return: If function fails or filename is NULL - -1.
 *         If file does not exist user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, e, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_WRONLY | O_APPEND);
	e = write(d, text_content, len);

	if (d == -1 || e == -1)
		return (-1);

	close(d);

	return (1);
}

