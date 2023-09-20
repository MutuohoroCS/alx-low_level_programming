#include "main.h"

/**
 * _islower - checks whether c is a lowercase letter
 * Return: 0 false
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
	{
		return (0);
	}
}
