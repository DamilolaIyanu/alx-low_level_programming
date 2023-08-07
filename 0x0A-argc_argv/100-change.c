#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum coin change
 *@argc: command line arg count
 *@argv: command line argument
 *Return: Return (0) on success
 */

int main(int argc, char *argv[])
{
	int cent, mincoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		mincoin += 1;
	}
	printf("%d\n", mincoin);
	return (0);
}
