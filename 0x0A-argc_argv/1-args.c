#include <stdio.h>
/**
 *main - counts the number of argument in the command line
 *@argc: command line arg count
 *@argv: command line arg vector
 *Return: Returns (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
