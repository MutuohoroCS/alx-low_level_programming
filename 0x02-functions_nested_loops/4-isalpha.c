#include "main.h"

/**
 * _isalpha - check whether alphabet is alphabeting both lower and uppercase
 * @c: this is the one being checked if its alphabeting
 * Return: 1if true and zero if false duh!
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c  <= 'Z'))
		return (1);
	return (0);
}
