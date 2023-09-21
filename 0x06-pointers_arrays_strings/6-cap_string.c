#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *s)
{
	int i;
	char *separators = " \t\n,;.!?\"(){}";

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || strchr(separators, s[i - 1]))
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
