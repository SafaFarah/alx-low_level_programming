#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid -  a function that returns a pointer to a 2 dimensional
 * @width: columns of array
 * @height: row of arry
 *
 * Return: array 2D
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	return (array);
}
