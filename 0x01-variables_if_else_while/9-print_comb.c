#include <stdio.h>

/**
 * main - prints 0 to 9 but with a twist
 * Return: 0 success or something idk
 */

int main(void)
{
	int chrctr;

	chrctr = 0;

	while (chrctr < 10)
	{
		putchar(chrctr + '0');
		if (chrctr != 9)
		{
			putchar(',');
			putchar(' ');
		}
		chrctr++;
	}
	putchar('\n');

	return (0);
}
