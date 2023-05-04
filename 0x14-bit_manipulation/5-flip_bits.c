#include "main.h"

/**
 * flip_bits - Number of bits to be flipped are counted
 * @n: Number of bits
 * @m: Number to be flipped
 *
 * Return: Required bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, prt = 0;

	while (xor > 0)
	{
		prt += (xor & 1);
		xor >>= 1;
	}

	return (prt);
}
