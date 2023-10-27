#include "main.h"

/**
 * flip_bits - return number of bits that
 * would need to be flipped to transform
 * one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int c = 0;

	while (xor)
	{
		if (xor & 1ul)
			c++;
		xor = xor >> 1;
	}
	return (c);
}
