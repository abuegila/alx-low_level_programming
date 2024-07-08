#include "main.h"

/**
 * _strstr - function to locate a substring
 * @haystack: pointer to the main string
 * @needle: pointer to the substring
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char *result;
char *fneedle;

for (result = haystack; *result != '\0'; result++)
{
for (fneedle = needle; *fneedle != '\0'; fneedle++)
{
if (*(result + (fneedle - needle)) != *fneedle)
{
break;
}
}
if (*fneedle == '\0')
{
return (result);
}
}
return (NULL);
}
