#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings,returns 1 if they can be considered identical
 * @s1: the first string
 * @s2: the second string (may contain the special character *)
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
