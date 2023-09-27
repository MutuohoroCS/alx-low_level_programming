#include "main.h"

/**
 * times_table - multiplication of nine
 */

void times_table(void)
{
	int lines;

	while (lines < 10)
	{
		int times;

		times = 0;
		while (times < 10)
		{
			int prod;

			prod = lines * times;
			if (times == 0)
			{
				_putchar(prod + '0');
			}

			if (prod < 10 && times != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) % '0');
			}
			_putchar('\n');
		}
