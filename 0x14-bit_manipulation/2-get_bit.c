#include "main.h"

/**
 * get_bit - This fn returns the value of a bit at an index in a decimal number
 * @n: Represents the number to search
 * @index: Represents index of the bit
 * Drkibugu
 * Return: Returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
