#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 *error_handler - prints the error message
 *@message: the error message
 *@exit_code: the exit
 */
void error_handler(const char *message, int exit_code)
{
	dprintf(2, "%s\n", message);
	exit(exit_code);
}
/**
 *set_file_permissions - this function set the file permnission
 *@filename: the pointer to the file
 *Return: returns the permission
 */
int set_file_permissions(const char *filename)
{
	return (chmod(filename, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
}

/**
 *main - copies a file from one place to anothr
 *@argc: the argument count
 *@argv: the argument vector
 *Return: depending on the success 1, -1 or 0
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	if (copy_file(file_from, file_to) == -1)
		exit(1);
	return (0);
}
/**
 *copy_file - copies file form one to another
 *@file_from: pointer to where we are copying from
 *@file_to: pointer to where we are copying to
 *Return: 0
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_handler("Error: Can't read from file", 98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		error_handler("Error: Can't write to file", 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_handler("Error: Can't write to file", 99);
		}
	}
	if (bytes_read == -1)
	{
		error_handler("Error: Can't read from file", 98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error_handler("Error: Can't close file descriptor", 100);
	}
	return (0);
}
