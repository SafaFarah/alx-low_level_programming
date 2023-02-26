#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;

/* for loop*/
for (i = 0 ; i < 100 ; i++)
{
/* for loop*/
for (j = 0 ; j < 100 ; j++)
{
if (j > i)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(32);
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i == 89)
	break;
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
