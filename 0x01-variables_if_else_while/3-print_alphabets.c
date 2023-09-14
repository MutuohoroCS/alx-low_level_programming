#include <stdio.h>
/**
 * main - prints uppercase and lowercase letters
 * Return: 0 when the doing is done
 */

int main(void)
{
	char smallalph;
	char bigalph;

	smallalph = 'a';
	while (smallalph <= 'z')
	{
		putchar(smallalph);
		smallalph++;
	}
	bigalph = 'A';
	while (bigalph <= 'Z')
	{
		putchar(bigalph);
		bigalph++;
	}
	putchar('\n');

	return (0);
}
