#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 *
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list op;

	if (!n)
		return (0);
	va_start(op, n);
	while (i--)
		sum += va_arg(op, int);
	va_end(op);
	return (sum);
}
