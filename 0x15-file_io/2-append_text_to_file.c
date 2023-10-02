#include "main.h"
/**
 *append_text_to_file - adds a text content to the end of a file
 *@filename: the name of the file to be appended
 *@text_content: the content to be appended
 *Return: returns 1 or -1 depending on the success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

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
