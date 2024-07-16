#include "main.h"
/**
 * create_array - creating a dynamic array
 * @size: the size of the array
 * @c: the char to fill the array with
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *cc;
unsigned int i;

if (size == 0)
return (NULL);
cc = (char)malloc(sizeof(char) * size);
if (cc == NULL)
return (NULL);
for (i = 0; i < size; i++)
cc[i] = c;
return (cc);
}
