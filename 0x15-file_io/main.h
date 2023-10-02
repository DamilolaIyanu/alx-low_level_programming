#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_file_for_reading(const char *filename);
int open_file_for_writing(const char *filename);
void copy_file_contents(int src_fd, int dest_fd);
void close_file(int fd);
int main(int argc, char *argv[]);
#endif
