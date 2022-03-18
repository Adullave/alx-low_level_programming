#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Prints numbers of base 10
* Description: prints all single digits numbers of base 10
* Return: 0
*/

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
