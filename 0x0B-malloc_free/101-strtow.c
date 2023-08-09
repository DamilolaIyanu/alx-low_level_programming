#include "main.h"
#include <stdlib.h>
/**
 *release - frees memory
 *@grid: The array
 *@height: The height of grid
 *Return: no return
 */
void release(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}

/**
 *strtow - splits a string into words
 *@str: hold the string
 *Return: Return a pointer to array
 */
char **strtow(char *str)
{
	size_t a, b, c, d, e;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = b = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			b++;
	{
		ptr = malloc(sizeof(char *) * (b + 1));
	}
		if (ptr == NULL || b == 0)
		{
			free(ptr);
			return (NULL);
		}
	for (c = e = 0; b > c; c++)
	{
		for (a = e; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				e++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				ptr[c] = malloc((a - e + 2) * sizeof(char));
				if (ptr[c] == NULL)
				{
				release(ptr, c);
				return (NULL);
				}
				break;
			}
		}
		for (d = 0; e <= a; e++, d++)
			ptr[c][d] = str[e];
		ptr[c][d] = '\0';
	}
	ptr[c] = NULL;
	return (ptr);

}
