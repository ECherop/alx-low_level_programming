#include "main.h"
/**
* reverse_array - function that reverses the
* content of an array of integers
* @a: first input parameter
* @n: second input parameter
* Return: void
*/
void reverse_array(int *a, int n)
{
int i;
int t;

for (i = 0; i < n / 2; i++)
{
t = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = t;
}
}
