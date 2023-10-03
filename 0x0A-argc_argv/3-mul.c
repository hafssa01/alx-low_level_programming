#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: number of command line argument
 * @argv: the array of command line argument
 * Return: (0) Always
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
