#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>
/**
 *create_file - create a file
 *@filename: pointer to the file
 *@text_content: pointer to the content
 *Return: 1 or -1 depending if it succeeds or not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
