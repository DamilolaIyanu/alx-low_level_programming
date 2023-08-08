#include "main.h"
#include <stdlib.h>
#include<stdio.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *
 *@str: the old pointer
 *
 *Return: Returns the new pointer
 */

char *_strdup(char *str)
{
	size_t j, i = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * i + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		newstr[j] = str[j];
	}
	return (newstr);
	free(str);

}
