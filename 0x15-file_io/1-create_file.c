#include "main.h"

/**
 * create_file  makes a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: pointer to a string to write to a file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, size);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
