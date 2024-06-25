#include "main.h"
/**
 * _islower - checks if the letter is lower case or not
 * @c: a character to be checked
 * Return: 0 if not a lower case | 1 if a lower case
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
