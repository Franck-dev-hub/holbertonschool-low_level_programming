#include "main.h"

/**
 * read_textfile - Read a file
 * @filename: Files's name
 * @letters: Number of letters
 *
 * Return: File content
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char*buffer;
	ssize_t bytes_read, bytes_written;

	file = open(filename, O_RDONLY, 0444);
	if (file == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file);

	if (bytes_written == bytes_read)
		return bytes_read;
	else
		return (0);
}
