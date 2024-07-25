#include "variadic_functions.h"
/**
 * print_numbers - printing integer
 * @separator:The string to be printed
 * @n:The number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ss;

va_start(ss, n);

for (i = 0; i < n; i++)
{
if (!separator)
printf("%d", va_arg(ss, int));
else if (separator && !i)
printf("%d", va_arg(ss, int));
else
printf("%s%d", separator, va_arg(ss, int));
}
va_end(ss);
printf("\n");
}
