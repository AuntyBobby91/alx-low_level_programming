#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to name the file to create.
 * @text_content: A pointer string to write the file.
 *
 * Return: Function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int bg, c, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	bg = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(bg, text_content, len);

	if (bg == -1 || c == -1)
		return (-1);

	close(bg);

	return (1);
}
