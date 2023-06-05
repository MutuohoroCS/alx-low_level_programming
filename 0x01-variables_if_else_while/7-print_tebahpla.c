#include <stdio.h>

/**
 * main - prints lowercase alphabet in kiundu reverse
 * Return: output 0 if code is codeing
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
