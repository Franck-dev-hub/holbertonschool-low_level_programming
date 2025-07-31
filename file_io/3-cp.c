#include "main.h"

/**
 * main - Welcome function.
 * @argc: Argument count.
 * @argv: ARgument values
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", 97);

	copy_text_to_file(argv[1], argv[2]);

	return (0);
}

/**
  * print_error - Function to print errors.
  * @msg: Message to print.
  * @arg: File.
  * @code: Exit code.
  *
  * Return: Void
  */

void print_error(const char *msg, const char *arg, int code)
{
	if (arg)
		dprintf(STDERR_FILENO, msg, arg);
	else
		dprintf(STDERR_FILENO, "%s", msg);
	exit(code);
}

/**
 * copy_text_to_file - Copy content from a file to another.
 * @file_from: File to copy.
 * @file_to: Destination
 *
 * Return: 1 on success or -1 on failure.
 */

int copy_text_to_file(const char *file_from, const char *file_to)
{
	int file_from_cp, file_to_cp;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	file_from_cp = open(file_from, O_RDONLY);
	if (file_from_cp == -1)
		print_error("Error: Can't read from file %s\n", file_from, 98);

	file_to_cp = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to_cp == -1)
		print_error("Error: Can't write to %s\n", file_to, 99);

	while ((bytes_read = read(file_from_cp, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to_cp, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(file_from_cp);
			print_error("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (close(file_from_cp) == -1)
		print_error("Error: Can't close fd %d\n", file_from_cp, 100);

	if (close(file_to_cp) == -1)
		print_error("Error: Can't close fd %d\n", file_to_cp, 100);

	return (1);
}
