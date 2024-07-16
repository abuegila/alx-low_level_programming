#include "main.h"

/**
* _strdup - copying an array
*@str:String to be copied
*Return: a pointer to the string, Null if not
*/

char *_strdup(char *str)
{
char *cp;
int i, length;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
length++;
cp = malloc(sizeof(char) * (length + 1));
if (cp == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
cp[i] = str[i];
}
cp[length] = '\0';
return (cp);
}
