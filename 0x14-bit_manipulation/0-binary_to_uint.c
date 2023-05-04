#include "main.h"

/**
 * binary_to_uint - Convert binary numb to unsigned integer
 * @b: Pointer to string of 0 and 1 char
 *
 * Return: If b is NULL or contains char not 0 or 1 - 0.
 *         Otherwise - the converted numb
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int d = 0;

	if (b[d] == '\0')
		return (0);

	while ((b[d] == '0') || (b[d] == '1'))
	{
		bin <<= 1;
		bin += b[d] - '0';
		d++;
	}

	return (bin);
}
