#include <stdio.h>

/**
 * main - twende rivash
 * Return: 0 if successful
 */
int main(void)
{
	char lastalph;

	lastalph = 'z';
	while (lastalph >= 'a')
	{
		putchar(lastalph);
		lastalph--;
	}
	putchar('\n');

	return (0);
}
