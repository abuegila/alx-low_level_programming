#include "variadic_functions.h"
/**
 * print_all - printing anything
 * @format:The type of args
 */
void print_all(const char * const format, ...)
{
unsigned int i;
va_list ss;
char *this_is_a_string;
char *sf = "";

va_start(ss, format);
i = 0;
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sf, va_arg(ss, int));
break;
case 'i':
printf("%s%d", sf, va_arg(ss, int));
break;
case 'f':
printf("%s%f", sf, va_arg(ss, double));
break;
case 's':
this_is_a_string = va_arg(ss, char *);
if (!this_is_a_string)
this_is_a_string = "(nil)";
printf("%s%s", sf, this_is_a_string);
break;
default:
i++;
continue;
}
sf = ", ";
i++;
}
}
printf("\n");
va_end(ss);
}
