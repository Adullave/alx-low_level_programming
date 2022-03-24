#include "main.h"

/**
 * _strcat - concatenates two strings
 * Description: joins two strings
 * @dest: destination value
 * @src: source value
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
}
