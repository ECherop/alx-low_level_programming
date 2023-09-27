#include "main.h"

/* Function prototype for actual_prime */
int actual_prime(int n, int i);

/**
* is_prime_number - main function
* @n: input parameter
* Return: 1 if n is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
* actual_prime - main function
* @n: input parameter
* @i: input parameter
* Return: 1 if n is prime, 0 otherwise
*/
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}

