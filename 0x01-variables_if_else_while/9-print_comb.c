#include <stdio.h>
/**
* main - Entry point
* Description: 'Check alphabet'
* Return: Always 0 when successful
*/
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
