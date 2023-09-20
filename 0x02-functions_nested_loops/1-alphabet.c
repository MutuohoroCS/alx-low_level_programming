#include "main.h"

/**
 * print_alphabet - print alphabet a-z in lowercase
 */
void print_alphabet(void)
{
	char lettr;

	lettr  = 'a';
	while (lettr <= 'z')
	{
		_putchar(lettr);
		lettr++;
	}
	_putchar('\n');
}
