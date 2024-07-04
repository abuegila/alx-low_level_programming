#include "main.h"
/**
 * leet - encoding the string to another
 * @n: the string to be processed
 * Return: a pointer to the string
 */
char *leet(char *n)
{
    char *current_char = n;
    char original_letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
    char leet_equivalents[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
    int i;

    while (*current_char != '\0')
    {
        for (i = 0; i < 10; i++)
        {
            if (*current_char == original_letters[i])
            {
                *current_char = leet_equivalents[i];
                break;
            }
        }
        current_char++;
    }

    return (n);
}
