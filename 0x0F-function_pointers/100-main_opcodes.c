#include <stdio.h>
#include <stdlib.h>

/**
 *print_opcode - prints the opearation code
 *@a: pointer to the address
 *@n: the number of bytes
 *Return: nothing
 */
void print_opcode(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%.2hhx", a[i]);
	if (i < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 *main - prints the opcode of its own function
 *@argc: argument count
 *@argv: argument vector
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcode((char *)&main, n);
}

