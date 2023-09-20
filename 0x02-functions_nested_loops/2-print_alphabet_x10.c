#include "main.h"

/**
 * print_alphabet_x10 - print 10 lines of alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int lines;

	lines = 1;
	while (lines <= 10)
	{
		char lttr = 'a';

		while (lttr <= 'z')
		{
			_putchar(lttr);
			lttr++;
		}
		_putchar('\n');
		lines++;
	}
}
