#include <stdio.h>

/**
 * main - should print all single digit numbers of base 10 from 0
 * Return: kiudu nunge when code runs successfully
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
