#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_text_to_file(const char *file_from, const char *file_to);
void print_error(const char *msg, const char *arg, int code);

#endif
