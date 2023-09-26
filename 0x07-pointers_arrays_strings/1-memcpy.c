#include "main.h"
/**
* _memcpy - function that copies n bytes
* from memory area src to memory area dest
* @dest: input parameter
* @src: input parameter
* @n: input parameter
* Return: the copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int u;

for (u = 0; u < n; u++)
{
dest[u] = src[u];
}
return (dest);

}
