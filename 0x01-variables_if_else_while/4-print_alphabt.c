#include <stdio.h>

/**
 * main - print alphabet and ignore q and e
 * Return: 0 always when success
 */

int main(void)
{
	char lettr;

	lettr = 'a' - 1;

	while (lettr < 'z')
	{
		lettr++;
		if (lettr == 'q' || lettr == 'e')
		{
			continue;
		}
		putchar(lettr);
	}
	putchar('\n');

	return (0);
}
