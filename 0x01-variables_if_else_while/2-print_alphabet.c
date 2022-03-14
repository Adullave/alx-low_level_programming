#include <stdio.h>

/**
* main - Print letters of the alphabets
*
* Description: Prints alphabets in small caps
*
* Return: Always 0 (Success)
*/

int main(void)

{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

{
		putchar(ch);
}
	putchar('\n');
	return (0);
}
