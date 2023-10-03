#include <stdio.h>
/**
 * main - print all arguments it receive
 * @argc: number of comman line argument
 * @argv: array of the program command line arg.
 * Return: (0) Always.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
