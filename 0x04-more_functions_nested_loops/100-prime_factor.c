#include <stdio.h>
/**
 *main - Finds the biggest prime number
 *
 *Return: Always (0)
 *
 *
 */
int main(void)
{
	int a;

	long int i, j = 612852475143;

	for (i = 1; i <= j; i++)
	{
		if (j % i == 0)
		{
			if (j == i)
			{
				printf("%ld\n", i);
				break;
			}
			a = j / i;
			j = a;
		}
	}

	return (0);

}

