#include "main.h"

/**
 * print_error_s - Function to print string errors.
 * @msg: Message to print.
 * @arg: File.
 * @code: Exit code.
 *
 * Return: Void
 */

void print_error_s(const char *msg, const char *arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * print_error_d - Function to print int errors.
 * @msg: Message to print.
 * @arg: File.
 * @code: Exit code.
 *
 * Return: Void
 */

void print_error_d(const char *msg, const int arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * main - copies the contents of one file to another
 *
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 on success
 *         or an appropriate error code on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error_s("Error: Can't read from file %s\n", argv[1], 98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		print_error_s("Error: Can't write to %s\n", argv[2], 99);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(file_from);
			close(file_to);
			print_error_s("Error: Can't write to %s\n", argv[2], 99);
		}
	}
	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		print_error_s("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (close(file_from) == -1)
		print_error_d("Error: Can't close fd %d\n", file_from, 100);
	if (close(file_to) == -1)
		print_error_d("Error: Can't close fd %d\n", file_to, 100);
	return (1);
}
