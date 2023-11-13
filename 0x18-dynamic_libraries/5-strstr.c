#include "main.h"

/**
 *_strstr - function locates a substring
 *@haystack: the string to be searched
 *@needle: the substring to be found
 *Return: Returns a pointer to the beginning of the substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
