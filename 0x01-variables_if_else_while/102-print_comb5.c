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
int k;
int l;

/* for loop*/
for (i = 48 ; i <= 57 ; i++)
{
/* for loop*/
for (j = 48 ; j < 57 ; j++)
{
/* for loop */
for (k = 48 ; k <= 57 ; k++)
{
/* for loop*/
for (l = 48 ; l <= 57 ; l++)
{
if (l == 48 && k == 48)
{
continue;
}
if ((l >  j && k >= i) || (i == j))
{
putchar(i);
putchar(j);
putchar(32);
putchar(k);
			putchar(l);
if (j == 56 && i == 57)
	break;
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}
