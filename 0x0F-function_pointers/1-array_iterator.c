#include "function_pointers.h"
/**
 * array_iterator - executing function of e
 * @array:The array to be processed
 * @size:The size of the array
 * @action:A pointer to function
 * Return:Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == NULL || action == NULL)
return;
for (i = 0; i < (int) size; i++)
{
action(array[i]);
}
}
