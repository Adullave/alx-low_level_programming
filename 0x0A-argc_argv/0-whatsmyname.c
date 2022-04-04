#include <stdio.h>

/**
 *main - writes arguments
 *@agrc: argument count
 *@argv: array of pointers to argument
 * Return 0;
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
