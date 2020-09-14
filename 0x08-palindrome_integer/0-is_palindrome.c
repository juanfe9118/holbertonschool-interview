#include "palindrome.h"

/**
 * is_palindrome - checks if a number is a palindrome
 * @n: the number to check
 * Return: 1 if n is palindrome 0 otherwise
 */
int is_palindrome(unsigned long n)
{
    unsigned long cp, rev = 0;

    cp = n;

    while (cp)
    {
        rev *= 10;
        rev += cp % 10;
        cp /= 10;
    }

    if (n == rev)
        return (1);

    return (0);
}