#ifndef MAIN
#define MAIN
#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
