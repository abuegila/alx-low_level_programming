#include "variadic_functions.h"
/**
 * sum_them_all - getting the sum of pars
 * @n: the number of args
 * Return: the resulting sum, 0 if not
 */
int sum_them_all(const unsigned int n, ...)
{
int x = 0;
int sum = 0;
va_list ss;
va_start(ss, n);

if (n == 0)
return (0);
for (int i = 0; i < n; i++)
sum += va_arg(ss, int);
va_end(ss);
return (sum);
}
