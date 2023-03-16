#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string
 *
 * Return: int 0
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int i = 0;
	int flag = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!(s[i] == '-' || s[i] == '+' || s[i] == ' '))
			break;
		if (s[i] == '-')
			sign = sign * -1;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + s[i] - '0';
			flag = 1;
		}
		if (!(s[i] >= '0' && s[i] <= '9') && (flag == 1))
			break;
	}
	return (num * sign);
}
