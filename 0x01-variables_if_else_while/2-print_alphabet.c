#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'print alphabet'
* Return: Always 0 when successful
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
	putchar(n);
	n++;
}
putchar('\n');
return (0);
}
