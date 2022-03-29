#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer that houses array
 * @b: constant byte
 * @n: first bytes of memory of array
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
