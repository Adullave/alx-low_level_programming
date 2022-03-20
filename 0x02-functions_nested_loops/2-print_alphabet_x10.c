#include "main.h"
/**
* main - print_alphabet_x10 - prints alphabet letters ten times
* Description: The function uses loop to operate
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int count, a;

	for (count = 1; count <= 10; count++)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
	}
}
