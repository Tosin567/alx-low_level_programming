#include "main.h"

/**
 * clear_bit - Value of bit at a given index to set at 0
 * @n: Pointer to bit
 * @index: Index of bit to be cleared
 *
 * Return: -1 if error occurs or 1 On Suucess
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 32))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
