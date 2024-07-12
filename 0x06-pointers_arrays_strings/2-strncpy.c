#include "main.h"
/**
 * _strncpy - copying a string
 * @dest:the first string
 * @src: the second string
 * @n: the number of bytes of the sec str
 * Return: a pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
