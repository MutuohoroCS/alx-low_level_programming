#include <stdio.h>

/**
 * main - print hex numbers
 * Return: 0 when success
 */

int main(void)
{
	int onetonine;
	char atof;

	onetonine = 0;
	while (onetonine < 10)
	{
		putchar(onetonine + '0');
		onetonine++;
	}
	atof = 'a';
	while (atof <= 'f')
	{
		putchar(atof);
		atof++;
	}
	putchar('\n');

	return (0);
}
