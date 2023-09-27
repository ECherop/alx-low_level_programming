#include "main.h"

/**
* _pow_recursion - main function
* @x: input parameter
* @y: input parameter
* Return: factorial of n
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
