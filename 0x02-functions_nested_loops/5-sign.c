#include "main.h"

/**
 * print_sign - print +,- or 0 depending on positive or ngative or 0 number
 * Return: 0 for 0 1 for positive and -1 for negative
 * @n: the number in queshchon
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	} else if (n == 0)
	{
		_putchar(48);

		return (0);
	} else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	return (0);
}
