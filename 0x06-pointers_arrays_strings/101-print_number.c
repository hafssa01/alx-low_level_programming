#include "holberton.h"
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	char ch;
	int num = n;
	int rev = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num != 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	while (rev != 0)
	{
		ch = (rev % 10) + '0';
		_putchar(ch);
		rev /= 10;
	}
}

