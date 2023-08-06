#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints the multiplication of command line arguments
 *@argc: command line arg. count
 *@argv: command line aarg. vector
 *Return: Returns (0) on success otherwise (1)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
