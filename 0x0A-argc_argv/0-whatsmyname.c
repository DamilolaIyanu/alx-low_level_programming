#include <stdio.h>

/**
 *main - the function prints its own name
 *@argc: command line argument count
 *@argv: command line argument vector
 *Return: Return(0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
