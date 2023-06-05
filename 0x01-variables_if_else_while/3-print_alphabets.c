#include <stdio.h>

/**
 * main - prints alphabet both in upper and lowercase
 * Return: nunge 0 when successful
 */

int main(void)
{
	char c, C;

	C = 'A';

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
