#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the last digit in a random number
 *
 * Description: prints last digit of a random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", last);
	else if (last < 5)
		printf("Last digit of %d is %d and is less than 6\n", last);
	return (0);
}
