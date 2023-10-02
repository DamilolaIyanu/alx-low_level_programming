#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 *create_file - creates a file with specified permissions
 *@filename: the name of the file to be created
 *@text_content: the content to be written into the file
 *Return: returns the 1 or -1 depending on the success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, status;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		status = write(fd, text_content, strlen(text_content));

		if (status == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
