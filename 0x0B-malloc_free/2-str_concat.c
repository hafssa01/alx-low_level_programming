#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cct;
	int n, si;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = si = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[si] != '\0')
		si++;
	cct = malloc(sizeof(char) * (n + si + 1));

	if (cct == NULL)
		return (NULL);
	n = si = 0;
	while (s1[n] != '\0')
	{
		cct[n] = s1[n];
		n++;
	}

	while (s2[si] != '\0')
	{
		cct[n] = s2[si];
		n++, si++;
	}
	cct[n] = '\0';
	return (cct);
}

