#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Print all possible different combination
 * of three digits.
 *
 * Return: 0; always success
 */

int main(void)
{

	int d1, d2, d3;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = 49; d2 <= 57; d2++)
		{
			for (d3 = 50; d3 <= 57; d3++)
			{
				if (d1 != d2 && d3 != d2 && d1 != d3)
				{
					putchar(d1);
					putchar(d2);
					putchar(d3);

					if (d1 + d2 + d3 != 24)
					{
						putchar(',');
						putchar(' ');
					}

				}

			}


		}

	}
	putchar('\n');

	return (0);
}
