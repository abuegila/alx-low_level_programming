#include "main.h"
#include <stdio.h>

/**
 * *_strstr - returning the first occurence
 * @haystack: the string to be checked
 * @needle: a pointer to the substring
 * Return: a pointer to the substring of NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}
return (NULL);
}
