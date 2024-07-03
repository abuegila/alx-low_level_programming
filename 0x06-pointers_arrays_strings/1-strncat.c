#include "main.h"
/**
 *_strncat - concatinating 2 strings but the second one with n bytes
 *@dest: a pointer to the destination string
 *@src: a pointer to the source string
 *@n: the number of bytes to be concatnated
 *Return: a pointer to the string
 */
char *_strncat(char *dest, char *src, int n)
{
int length;
int i;

length = 0;
while (dest[length] != '\0')
{
length++;
}
for (i = 0; i < n && src[i] != '\0'; i++, length++)
{
dest[length] = src[i];
}
dest[length] = '\0';
return (dest);
}
