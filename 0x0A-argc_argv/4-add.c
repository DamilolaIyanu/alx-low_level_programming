#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds numbers on command line
 *@argc: arg count
 *@argv: holds the numbers to be added
 *Return: Returns 0 on success otherwise returns 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; argc > i; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
