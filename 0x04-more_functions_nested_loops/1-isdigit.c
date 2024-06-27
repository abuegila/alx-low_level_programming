#include "main.h"
/**
 * _isdigit - checking if the paramater is a digit or not
 * @c: a character to be checked
 * Return: 1 if it s a digit - 0 if it's not
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
