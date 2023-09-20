#include <stdio.h>
#include <string.h>
/**
 * Writed by Hafsa
 *
 * Concatenates two strings
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int l1 = 0;
	int l2 = 0;

	while(dest[l1] != '\0')
	{
		l1++;
	}

	while(src[l2] != '\0')
	{

		dest[l1] = src[l2];
		l1++;
		l2++;
	}

	dest[l1] = '\0';
	return(dest);
}
