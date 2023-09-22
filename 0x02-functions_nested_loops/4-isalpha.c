#include "main.h"

/**
 * _isalpha - check whether alphabet is alphabeting both lower and uppercase
 * @c: this is the one being checked if its alphabeting
 * Return: 1if true and zero if false duh!
 */

int _isalpha(int c)
{
	c = c + '0';
	if ((c >= 65 || c == 90) && (c >= 97 || c == 122))
		return (1);
	return (0);
}
