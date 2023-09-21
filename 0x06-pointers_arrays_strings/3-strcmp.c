/**
 * _strcmp - Compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: An integer less than, equal to, or greater than 0 if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (-1); /* s1 is shorter */
	}
	else if (*s1 != '\0' && *s2 == '\0')
	{
		return (1); /* s1 is longer */
	}
	return (0); /* Both strings are equal */
}
