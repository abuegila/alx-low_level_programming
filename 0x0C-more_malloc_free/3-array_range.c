#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creating an array of integers
 * @min: minimum range of values to be stored
 * @max: maximum range of values be stored
 * Return: a pointed to the new array
 */
int *array_range(int min, int max)
{
int *ptr;
int i, size;

if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
