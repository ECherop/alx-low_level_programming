#include "main.h"
/**
* _strchr - function that locates
* a character in a string
* @s: input parameter
* @c: input parameter
* Return: always 0
*/
char *_strchr(char *s, char c)
{
int j;

for (j = 0; s[j] >= '\0'; j++)
{
if (s[j] == c)
return (s + j);
}
return (0);
}
