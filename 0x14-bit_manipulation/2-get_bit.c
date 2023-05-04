#include "main.h"

/**
 * get_bit - Function that returns the value of bit at an index.
 * @n: bit search
 * @index: index of bit which starts at 0
 *
 * Return: the value of bit index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int p;

	if (index > 63)
		return (-1);

	p = (n >> index) & 1;

	return (p);
}
