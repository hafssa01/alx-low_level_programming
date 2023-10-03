#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argmument vector (an array of strings)
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("Progame name: %s\n", argv[0]);
	}
	else
	{
		printf("Unable to determine program name.\n");
	}

	return (0);
}


