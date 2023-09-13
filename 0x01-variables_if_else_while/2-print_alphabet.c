#include <stdio.h>

/**
 * main - print alphabet
 * Return: 0 when run successfully
 */

int main(void)
{
	char firstalph;

	firstalph = 'a';

	while (firstalph <= 122)
	{
		putchar(firstalph);
		firstalph++;
	}
	putchar('\n');

	return (0);
}
