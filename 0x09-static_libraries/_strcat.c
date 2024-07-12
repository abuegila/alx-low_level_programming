#include "main.h"

/**
 * _strcat - contcatinating 2 strings
 * @dest: pointer to the final string
 * @src: pointer to a string string
 * Return: pointer to the string
 */
char *_strcat(char *dest, char *src)
{
int length;
int i;

length = 0;
while (dest[length] != '\0')
{
length++;
}
for (i = 0; src[i] != '\0'; i++, length++)
{
dest[length] = src[i];
}
dest[length] = '\0';
return (dest);
}
