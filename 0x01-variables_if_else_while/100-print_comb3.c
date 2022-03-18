#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
