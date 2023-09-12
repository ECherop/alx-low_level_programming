#include "main.h"

/**
* print_alphabet_x10 - function to print the alphabet in lowercase 10 times
*
* Description: This function prints the lowercase alphabet 10 times
* with each set of alphabets followed by a newline character.
*
* Return: None
*/
void print_alphabet_x10(void)
{
int i;
char j;

for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
