#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase followed by new line
 * Return: 0 when code exectues with no error
 */

int main(void)
{
	int n = 0;
	char l = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
