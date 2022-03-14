#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - determines if number is positive, negative or zero
*
* Description: The program assigns random numbers to variable
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is 0\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
