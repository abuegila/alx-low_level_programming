#include "main.h"

/**
 * leet - a function to endcode a string
 * @str: string to be encoded
 * Return: a pointer to the string
 */
char *leet(char *str)
{
char *ptr = str;
char t[] = "aAeEoOtTlL";
char l[] = "4433007711";
int i;

while (*ptr)
{
i = 0;
while (i < 10)
{
if (*ptr == t[i])
{
*ptr = l[i];
break;
}
i++;
}
ptr++;
}
return (str);
}
