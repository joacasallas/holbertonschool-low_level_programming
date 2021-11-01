#include "main.h"

/**
 * **alloc_grid - create a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * @width: width of the grid
 * @height: height of the grid
 * Return: Pointer to the grid or NULL on failure
 * if width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr_malloc;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr_malloc = malloc(sizeof(int *) * height);
	if (ptr_malloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr_malloc[i] = malloc(sizeof(int) * width);
		if (ptr_malloc[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(ptr_malloc[j]);
			}
			free(ptr_malloc);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr_malloc[i][j] = 0;
		}
	}
	return (ptr_malloc);
}
