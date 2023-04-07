#include "main.h"

/**
 * append_text_to_file - Appends text to end of a file.
 * @filename: pointer to the name of a file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, size);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
