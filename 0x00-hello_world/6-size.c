/**
 * main - print sizes of intrinsic data types
 * Return: 0 when code kipchoges
 */

#include <stdio.h>

int main(void)
{
	char c;
	int num;
	long int longnum;
	long long int longlongnum;
	float flt;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof
			(longnum));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)
			sizeof(longlongnum));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flt));

	return (0);
}
