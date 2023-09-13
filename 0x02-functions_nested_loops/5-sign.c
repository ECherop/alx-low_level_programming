#include "main.h"
/**
* print_sign - Determine if the input number
* greater, equal of less than zero
*
* @n: The input number as an integer
* Return: 1 if greater than zero. 0 for zero.
* -1 is less than zero.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
