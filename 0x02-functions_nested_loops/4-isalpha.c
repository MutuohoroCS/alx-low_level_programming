#include "main.h"

int _isalpha(int c)
{
	c = c+'0';
	if (c == 65 && c <=90) && (c == 97 && c <= 122)
		return 1;
	return 0;
}
