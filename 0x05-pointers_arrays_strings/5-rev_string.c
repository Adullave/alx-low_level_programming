#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	char count = 0;
	int i;

	while (s[counter] != '\0')
		count++;
	for (i = 0; i < counter; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
