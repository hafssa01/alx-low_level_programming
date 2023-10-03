#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 (True), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int n, i, r;
	int cs[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (n >= cs[i])
		{
			r++;
			n -= cs[i];
		}
	}

	printf("%d\n", r);
	return (0);
}

