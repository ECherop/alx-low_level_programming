#include "main.h"

/* Function prototypes */
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
* is_palindrome - main function
* @s: input parameter
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - main function
* @s: input parameter
* Return: string length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - checks the characters recursively for palindrome
* @s: input parameter
* @i: input parameter
* @len: string length
*
* Return: 1 if palindrome, 0 otherwise
*/
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
