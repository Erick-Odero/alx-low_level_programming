#include "main.h"

/**
 * print_binary - the function prints the binary equivalent of a decimal number
 * @n: the number which is to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int m, counter = 0;
	unsigned long int value;

	for (m = 63; m >= 0; m--)
	{
		value = n >> m;

		if (value & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

