#include "main.h"

/**
 * get_endianness - checking endianness
 *
 * Return: 0 if Big endian or 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
		return (1);

	return (0);
}
