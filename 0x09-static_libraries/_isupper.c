#include "main.h"
/**
 * _isupper - checking if a character is an uuper case or not
 * @c: a character to be checked
 * Return: 1 if it's an upper - 0 if it's not
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
