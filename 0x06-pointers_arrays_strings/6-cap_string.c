/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize the first character if needed */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32; /* Convert to uppercase in ASCII */

	/* Start a loop to iterate through the string */
	while (str[i] != '\0')
	{
		/* Check for word separators and capitalize */
		if (is_separator(str[i]) && is_lowercase(str[i + 1]))
			str[i + 1] -= 32; /* Convert to uppercase in ASCII */

		i++; /* Move to the next character */
	}
	return (str); /* Return the modified string */
}
