#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char baseTen = '0';

	while (baseTen <= '9')
	{
		putchar(baseTen);
		baseTen++;
	}
	putchar('\n');
	return (0);
}
