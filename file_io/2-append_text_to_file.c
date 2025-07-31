#include "main.h"

/**
 * append_text_to_file - Add content at the EOF.
 * @filename: File's name.
 * @text_content: Text tu add at the EOF.
 *
 * Return: 1 on success or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

