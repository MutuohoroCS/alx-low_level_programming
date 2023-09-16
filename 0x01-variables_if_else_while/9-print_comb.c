#include <stdio.h>

int main(void)
{
	int chrctr;

	chrctr = 0;

	while (chrctr < 10)
	{
		putchar(chrctr + '0');
		putchar(',');
		putchar(' ');
		chrctr++;
	}
	putchar('\n');

	return (0);
}
