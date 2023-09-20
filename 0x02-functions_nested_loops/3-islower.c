#include "main.h"

/**
 * _islower - checks whether c is a lowercase letter
 * @c: character to be checked lowercase
 * Return: 1 if the char is lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
