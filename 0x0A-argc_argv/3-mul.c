#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers followed by a new line.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0 else - 1
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
