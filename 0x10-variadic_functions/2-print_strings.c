#include "variadic_functions.h"
/**
 * print_strings - printing strings
 *@separator:The string to be printed
 * @n:The number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list sss;
char *ss;
va_start(sss, n);

for (i = 0; i < n; i++)
{
ss = va_arg(sss, char *);
if (!ss)
ss = "(nil)";
if (!separator)
printf("%s", ss);
else if (separator && i == 0)
printf("%s", ss);
else
printf("%s%s", separator, ss);
}
va_end(sss);
printf("\n");
}
