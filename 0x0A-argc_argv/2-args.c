#include <stdio.h>

/**
 *main - prints all the argument on the command line
 *@argc: command line arg. count
 *@argv: command line argument vector
 *Return: Returns (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
