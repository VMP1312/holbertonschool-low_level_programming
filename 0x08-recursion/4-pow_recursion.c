#include "holberton.h"
/**
 *_pow_recursion - return the value of a pow
 *@x: base
 *@y: pow
 *Return: -1 if error, if not, the value of the pow
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
