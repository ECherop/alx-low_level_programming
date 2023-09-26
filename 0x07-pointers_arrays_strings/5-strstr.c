#include "main.h"
/**
* _strstr - function that finds
* the first occurrence of substring needle
* @haystack: input parameter
* @needle: input parameter
* Return: always 0
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *j = needle;

while (*i == *j && *j != '\0')
{
i++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);

}
