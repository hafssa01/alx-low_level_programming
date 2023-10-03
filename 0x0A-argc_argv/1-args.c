#include <stdio.h>

/**
 * main - print the number of arguments passed into it.
 * @argc: number of command line argument.
 * @argv: array that contains line argument.
 * Return: (0) Always.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
