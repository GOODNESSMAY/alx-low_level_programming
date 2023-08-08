#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - make grid with nested loop
* @width: input
* @height: input
* Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)

{
	int **yaa;
	int p, t;

	if (width <= 0 || height <= 0)

	return (NULL);
	yaa = malloc(sizeof(int *) * height);
	if (yaa == NULL)

	return (NULL);
	for (p = 0; p < height; p++)

	{
	yaa[p] = malloc(sizeof(int) * width);

	if (yaa[p] == NULL)
	{
	for (; p >= 0; p--)
	free(yaa[p]);
	free(yaa);
	return (NULL);

	}

	}

	for (p = 0; p < height; p++)

	{
	for (t = 0; t < width; t++)
	yaa[p][t] = 0;
}
	return (yaa);
}

