#include <stdio.h>

/**
 * print_last_digit - print last digit of a number
 * @nmbr: the number where last digit is returned
 * Return: last digit
 */

int print_last_digit(int nmbr)
{
	int lstdgt;

	lstdgt = nmbr % 10;
	return (lstdgt);
}
