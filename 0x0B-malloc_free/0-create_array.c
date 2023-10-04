#include "main.h"

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ch = malloc(size);

	if (size == 0 || ch == 0)
		return (0);

	while (size--)
		ch[size] = c;

	return (ch);
}
