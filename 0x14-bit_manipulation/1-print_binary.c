#include "main.h"

/**
 * print_binary - print a number as binary string
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, p = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			p++;

		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}
