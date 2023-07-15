#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 *
 */

int main(void)
{
	char reversedAlpha = 'z';

	while (reversedAlpha >= 'a')
	{
		putchar(reversedAlpha);
		reversedAlpha--;
	}
		putchar('\n');
		return (0);
}
