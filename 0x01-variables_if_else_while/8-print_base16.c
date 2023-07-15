#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 *
 */

int main(void)
{
	char letters = 'a';
	char numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
		putchar('\n');
		return (0);

}
