#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strg;
	unsigned int i = 0, j = 0, s1_len1 = 0, s2_len2 = 0;

	while (s1 && s1[s1_len1])
		s1_len1++;
	while (s2 && s2[s2_len2])
		s2_len2++;

	if (n < s2_len2)
		strg = malloc(sizeof(char) * (s1_len1 + n + 1));
	else
		strg = malloc(sizeof(char) * (s1_len1 + s2_len2 + 1));

	if (!strg)
		return (NULL);

	while (i < s1_len1)
	{
		strg[i] = s1[i];
		i++;
	}

	while (n < s2_len2 && i < (s1_len1 + n))
		strg[i++] = s2[j++];

	while (n >= s2_len2 && i < (s1_len1 + s2_len2))
		strg[i++] = s2[j++];

	strg[i] = '\0';

	return (strg);
}
