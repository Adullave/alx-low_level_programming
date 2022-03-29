#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: source
 * @c: character to be found
 *
 * Return: 0
 */

char *_strchr(char *s, char c);
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
		return (s);
		}
	}
	return (0);
}
