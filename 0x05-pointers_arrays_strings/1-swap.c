#include "main.h"
/**
* swap_int - function that swaps
* int *a, int *b
* @a: first input parameter
* @b: second input parameter
* Return: void
*/
void swap_int(int *a, int *b)

{
int c;
c = *a;
*a = *b;
*b = c;
}
