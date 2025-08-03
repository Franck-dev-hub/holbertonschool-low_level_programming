#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

void print_magic(unsigned char *e_ident)
{
    int i;
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%2.2x%c", e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
}

int main(int argc, char *argv[])
{
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98)
	}
	int file = open(filename, O_RDONLY);
	if (file == -1)
	{
		perror("Error opening file");
		return (-1);
	}

	Elf64_Ehdr header;
	bytes_read = read(file, &header, sizeof(header));

	if (bytes_read == -1)
	{
		perror("Error reqding file");
		close(file);
		return (98);
	}

	close(file);
	return (0);
}
