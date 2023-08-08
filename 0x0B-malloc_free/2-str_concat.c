#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *str_concat - function concatenates two strings
 *@s1: the first string
 *@s2: the second string to be concatenated
 *Return: Return pointer to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	size_t i = 0;
	size_t j = 0;
	size_t k, l;
	char *p;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	for (l = 0; l <= j; l++)
	{
		p[k] = s2[l];
		k++;
	}
	return (p);
}
