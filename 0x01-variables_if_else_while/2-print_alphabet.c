#include <stdio.h>

/**
 * main - prints the alphabet in lowercase letters
 * Return: outputs 0 when code successful
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
