#include <stdio.h>

/**
 *main - writes arguments
 *@agrc: argument count
 *@argv: array of pointers to argument
 * Return 0;
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
