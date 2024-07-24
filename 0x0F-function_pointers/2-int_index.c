#include "function_pointers.h"
/**
 * int_index - Searching for an integer
 * @array:The array
 * @size:The size of the array
 * @cmp:A function pointer
 * Return:The counter of the ints
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
return (i);
}
return (-1);
}
