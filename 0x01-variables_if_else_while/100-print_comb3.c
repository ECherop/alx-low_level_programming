#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'Check number if it is positive or negative'
* Return: Always 0 when successful
*/
int main(void)
{
int d, p;
for (d = '0'; d < '9'; d++)
{
for (p = d + 1; p <= '9'; p++)
{
if (p != d)
{
putchar (d);
putchar (p);
if (d == '8' && p == '9')
continue;
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
