#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *k;
	int i, e = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	k = malloc(sizeof(char) * (i + 1));

	if (k == NULL)
		return (NULL);

	for (e = 0; str[e]; e++)
		k[e] = str[e];

	return (k);
}

