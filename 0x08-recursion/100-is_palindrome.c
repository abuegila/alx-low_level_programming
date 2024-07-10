#include "main.h"
int checking_palin(char *s, int n, int i);
/**
 * _strlen_recursion - getting the lgenth of string
 * @s: the string to be checked
 * Return: the value of length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - chekinng if a string is palin
 * @s: the string to be checked
 * Return: 1 if it is 0 if it is not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (checking_palin(s, _strlen_recursion(s), 0));
}
/**
 * checking_palin - checking if its a paling
 * @s: the string to be checked
 * @n: the length of the string
 * @i: always 0
 * Return: the value 1 if it is 0 if it is not
 */
int checking_palin(char *s, int n, int i)
{
if (*(s + n - 1) != *(s + i))
return (0);
if (i >= n)
return (1);
return (checking_palin(s, n - 1, i + 1));
}
