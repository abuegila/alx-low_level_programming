#include "main.h"
/**
 * _pow_recursion - clac pow by rec
 * @x: the number to be calculated
 * @y: the power
 * Return: the value of multplying
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y < 1)
return (1);
return (x * _pow_recursion(x, y - 1));
}
