#include "main.h"
/**
 * _memcpy - a function that copies memoty area
 * @dest: memory where it is stored
 * @src: copied memory source
 * @n: number of bytes
 * Return: copied memory with chages due to n bytes
 */

char *memcpy(char *dest, char *src, unsigned int n);
{
    int d = 0;
    int i = n;

    for (i = 0; i < n; i++)
    {
        dest[d] = src[d];
        n--;
    }
    return (dest);

}