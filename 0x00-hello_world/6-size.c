#include <stdio.h>
/**
 * main - return sies of intrinsic data types
 * Return: 0 you better be successful
 */

int main(void)
{
	char shar;
	int intgr;
	long int lng_intgr;
	long long int lint;
	float flt;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(shar));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intgr));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lng_intgr));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lint));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flt));
	return (0);
}
