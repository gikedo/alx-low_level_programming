#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - access a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of a file.
 * @letters: The figures of letters the
 *           function should access and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual figure of bytes the function can access and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *string;

	if (filename == NULL)
		return (0);

	string = malloc(sizeof(char) * letters);
	if (string == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, string, letters);
	z = write(STDOUT_FILENO, string, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(string);
		return (0);
	}

	free(string);
	close(x);

	return (z);
}
