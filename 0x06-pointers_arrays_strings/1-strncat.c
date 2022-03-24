#include "main.h"

/*
 * _strncat - concatenates two strngs using n number
 * Description: concatenates two strings using n
 * @dest: Destination charater
 * @src: source string
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (desti[i] != '\0')
	{
		i++
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
