#include "main.h"
/**
 * leet - encoding the string to another
 * @n: the string to be processed
 * Return: a pointer to the string
 */
char *leet(char *n)
{
int i;
char *current_char = n;
char lower_case_letters[] = {'a', 'e', 'o', 't', 'l'};
char upper_case_letters[] = {'A', 'E', 'O', 'T', 'L'};
char leet_numbers[] = {'4', '3', '0', '7', '1'};
    
while (*current_char != '\0')
{
for (i = 0; i < 5; i++)
{
if (*current_char == lower_case_letters[i] || *current_char == upper_case_letters[i])
{
*current_char = leet_numbers[i];
break;
}
}
current_char++;
}
return (n);
}
