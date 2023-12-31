#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates the n of string 2 to string 1
 *@s1: the first string
 *@s2: the second string
 *@n: the number of character to be added to the first string
 *Return: Returns pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, k;
	char *ptr;

	if (s1 == NULL)
		i = 0;
	else
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		j = 0;
		while (s2[j] != '\0')
			j++;
	}
	if (j > n)
		j = n;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (k = 0; k < j; k++)
		ptr[k + i] = s2[k];
	ptr[i + j] = '\0';
	return (ptr);
}
