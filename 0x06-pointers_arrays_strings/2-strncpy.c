#include "main.h"
/**
* _strncpy - function that copies
* a string
* @dest: first input parameter
* @src: second input parameter
* @n: third input parameter
* Return: void
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
