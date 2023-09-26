#include <stdio.h>

/**
 * print_last_digit - print last digit of a number
 * @nmbr: the number where last digit is returned
 * Return: last digit
 */

int print_last_digit(int nmbr)
{
	int lstdgt;

	if (nmbr < 0)
	{
		nmbr = -nmbr;
	}

	lstdgt = nmbr % 10;
	if (lstdgt < 0)
	{
		lstdgt = -lstdgt;
	}

	_putchar(a+'0');

	return (lstdgt);
}
