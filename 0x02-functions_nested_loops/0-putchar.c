#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";
	int maxstring = 80;
	int count;
	/* for loop */
	for (count = 0 ; count < maxstring ; count++)
	{
		if (string[count] == '\0')
		{
			_putchar('\n');
			break;
		}
	else
		_putchar(string[count]);
	}
	return (0);
}
