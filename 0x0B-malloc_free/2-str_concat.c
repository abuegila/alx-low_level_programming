#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *Return: a pointer to new string in, Null if not
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i, concat_i = 0, length = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
length++;
concat_str = malloc(sizeof(char) * length);
if (concat_str == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
concat_str[concat_i++] = s1[i];
for (i = 0; s2[i]; i++)
concat_str[concat_i++] = s2[i];
return (concat_str);
}
