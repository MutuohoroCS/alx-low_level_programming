#include <stdio.h>

/**
 * _abs - return absolute value of a number
 * @nmbr: the value to be made absolute
 * Return: n absolute value
 */

int _abs(int nmbr)
{
	if (nmbr >= 0)
	{
		return (nmbr);
	}
	return (-nmbr);
}
