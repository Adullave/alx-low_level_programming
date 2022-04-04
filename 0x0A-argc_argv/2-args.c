#include <stdio.h>

/**
 * main: arguments are printed
 * @argc: argument
 * @argv: pointer to argument string
 * Description: Prints out argument on new line
 *
 * Return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
