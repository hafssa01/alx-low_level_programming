#include <stdio.h>

/**
 * _strncat - Concatenate two strings, using at most 'n' characters from 'src'.
 * @dest: The destination string.
 * @src: The source string to concatenate.
 * @n: The maximum number of characters to concatenate from 'src'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ld = 0;
	int ls;

	while (dest[ld] != '\0')
	{
		ld++;
	}
	for (ls = 0; ls < n && src[ls] != '\0'; ls++)
	{
		dest[ld + ls] = src[ls];
	}
	dest[ld + ls] = '\0';
	return (dest);
}
