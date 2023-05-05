#include "main.h"

/**
 * get_bit - returning the value of the bit at an index in a decimal number
 * @n: This is the  number to search
 * @index: This is the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_the_bit;

	if (index > 63)
		return (-1);

	value_of_the_bit = (n >> index) & 1;

	return (value_of_the_bit);
}

