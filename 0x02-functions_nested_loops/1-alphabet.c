#include "main.h"

/**int main(void)
{
	return (0);
}**/
void print_alphabet(void)
{
	char lettr;

	lettr  = 'a';
	while ('a' <= 'z')
	{
		_putchar(lettr);
		lettr++;
	}
	_putchar('\n');
	return;
}
