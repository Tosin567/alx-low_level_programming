#include "main.h"

/**
 * set_bit - value of a bit at an index set to 1
 * @n: Pointer to bit
 * @index: Index value
 *
 * Return: -1 if error occurs or 1 On Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 32))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
