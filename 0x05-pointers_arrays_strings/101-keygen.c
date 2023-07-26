#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Generates random password
 *
 *Return: Returns(0)
 *
 */

int main(void)
{
	int add;
	char a;

	srand(time(NULL));
	add = 0;

	while (add <= 2645)
	{
		a = rand() % 128;
		add += a;
		putchar(a);
	}
	putchar(2772 - add);

	return (0);
}
