#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: string
 * @s2: string
 *
 * Return : number
 */
int _strcmp(char *s1, char *s2)
{
	int w;
	int n;

	n = s1[0];
	w = s2[0];
	return ((n - w));
}
