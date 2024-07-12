#include "main.h"
/**
 * _isalpha - checker if the parameter c is a character or not
 * @c: a paramter to be checked
 * Return: 1 if its a character | 0 if its not
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
