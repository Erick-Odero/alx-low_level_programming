#include "main.h"

/**
 *binary_to_uint - converting a binary number to unsigned int
 *@b: string that contains the binary number
 *
 * Return: the number that has been converted
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		result = 2 * result + (b[k] - '0');
	}

	return (result);
}

