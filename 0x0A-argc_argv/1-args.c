#include <stdio.h>
/*
 * main - prints the number of argument passed
 * @argc: arguments
 * @argv: argument string pointer
 * Description: prints number of arguments passed into it
 *
 * Return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
