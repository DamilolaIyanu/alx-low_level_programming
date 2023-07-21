#include <stdio.h>
/**
 *main - Fizzbuzz game to determine multiples of 3 and 5.
 *Fizzbuzz is like a game to detect which number is divisible
 *by 3, 5 or both.
 *Return: Always (0)
 *
 *
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
