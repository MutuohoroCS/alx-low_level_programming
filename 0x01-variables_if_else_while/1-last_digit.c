#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print last digit and check if it is 0,>5,<6 and !0
 * Return: if succedes
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastofn = n % 10;

	if (lastofn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,
				lastofn);
	} else if (lastofn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastofn);
	} else
	{

		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, lastofn);
	}

	return (0);
}
