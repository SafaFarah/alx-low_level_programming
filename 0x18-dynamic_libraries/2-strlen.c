/**
 * _strlen -  a function that returns the length of a string.
 *@s: char pointer
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
