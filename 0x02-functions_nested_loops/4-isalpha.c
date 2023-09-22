#include "main.h"

/**
 * _isalpha - check whether alphabet is alphabeting both lower and uppercase
 * @c: this is the one being checked if its alphabeting
 * Return: 1if true and zero if false duh!
 */

int _isalpha(int c)
{
	c = c;
	if ((c + '0' >= 65 || c + '0' == 90) && (c + '0' >= 97 || c + '0' == 122))
		return (1);
	return (0);
}
