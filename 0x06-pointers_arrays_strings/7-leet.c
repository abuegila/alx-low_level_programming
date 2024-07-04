#include "main.h"
/**
 * leet - encoding the string to another
 * @n: the string to be processed
 * Return: a pointer to the string
 */
char *leet(char *n)
{
char *fin = n;
char st1[] = {'a', 'e', 'o', 't', 'l'};
int st2[] = {4, 3, 0, 7, 1};
unsigned int i;

while (*n)
{
for (i = 0; i < 5; i++)
if (*n == st1[i] || *n == st1[i] - 32)
*n = 48 + st2[i];
n++;
}
return (fin);
}
