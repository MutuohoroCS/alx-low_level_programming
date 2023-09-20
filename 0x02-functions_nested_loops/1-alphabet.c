#include "main.h"

int main(void)
{
	char lettr;

	lettr  = 'a';
	while ('a' <= 'z')
	{
		_putchar(lettr);
		lettr++;
	}
	_putchar('\n');

	return (0);
}
