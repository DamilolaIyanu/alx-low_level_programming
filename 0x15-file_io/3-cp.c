#include "main.h"

/**
 *open_file_for_reading - it opens the file for reading
 *@filename: the name of the file we are reading
 *Return: returns the file
 */
int open_file_for_reading(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 *open_file_for_writing - it opens the file for writing
 *@filename: the file we are writing into
 *Return: returns the written file
 */
int open_file_for_writing(const char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 *copy_file_contents - copies from one file to another
 *@src_fd: the source file
 *@dest_fd: the destination file
 */
void copy_file_contents(int src_fd, int dest_fd)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to file descriptor %d\n", dest_fd);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file descriptor %d\n", src_fd);
		exit(98);
	}
}

/**
 *close_file - closes the file
 *@fd: the file
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 *main - copies content of one file to another
 *@ac: the argument count
 *@av: the vector
 *Return: returns 0 on success
 */

int main(int ac, char *av[])
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_for_reading(av[1]);
	fd_to = open_file_for_writing(av[2]);

	copy_file_contents(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
