#include "main.h"
/**
* alloc_grid - creating 2d array
*@width: the width of the array
*@height: the height of the array
*Return: a pointer to the 2d array
*/
int **alloc_grid(int width, int height)
{
int **array;
int i;
int j;

i = 0;
if (width == 0 || height == 0)
return (NULL);
array = (int **) malloc(sizeof(int *) * height);
if (array != NULL)
{
for (; i < height; i++)
{
array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] != NULL)
{
for (j = 0; j < width; j++)
array[i][j] = 0;
}
else
{
while (i >= 0)
{
free(array[i]);
i--;
}
free(array);
return (NULL);
}
}
return (array);
}
else
{
return (NULL);
}
}
