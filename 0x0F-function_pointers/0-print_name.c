#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - printing a name
 * @name:The person name
 * @f:A pointer to a function
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
