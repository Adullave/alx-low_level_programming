#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of multiplication followed by new line
 * @argc: argument character integer
 * @argv: argument string list
 * Description: a function that prints out the result of multiplication
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
