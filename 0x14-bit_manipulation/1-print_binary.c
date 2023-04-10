#include "main.h"

/**
 * print_binary - Function that print the binary form of number
 * @n: Number to be printed in binary form
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int z, print = 0;
	unsigned long int numb;

	for (z = 63; z >= 0; z--)
	{
		numb = n >> z;

		if (numb & 1)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
