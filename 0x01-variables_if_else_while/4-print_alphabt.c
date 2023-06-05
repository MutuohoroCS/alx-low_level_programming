#include <stdio.h>

/**
 * main - will print kiundu alphabetical skipping q and e
 * Return: should return zero '0' if code runs successfully
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if ((c == 'e') || (c == 'q'))
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');

		return (0);
}
