# include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array 2D
 *
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
