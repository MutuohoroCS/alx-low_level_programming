#include <stdio.h>

/**
 * main - print numbers 0 to 9
 * Return: 0 while success
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
