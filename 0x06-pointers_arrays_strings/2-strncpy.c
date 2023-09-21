/**
 * _strncpy - Copy a string, up to 'n' characters, from 'src' to 'dest'.
 * @dest: The destination string.
 * @src: The source string to copy.
 * @n: The maximum number of characters to copy from 'src'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int co;

	for (co = 0; co < n && src[co] != '\0'; co++)
	{
		dest[co] = src[co];
	}
	while (co < n)
	{
		dest[co] = '\0';
		co++;
	}
	return (dest);
}

