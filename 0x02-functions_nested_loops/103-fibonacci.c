#include <stdio.h>
/**
 *main - Entry point
 *
 *
 *Return: Always (0)
 *
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0, sumAll = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			sumAll = sumAll + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", sumAll);
	return (0);
}
