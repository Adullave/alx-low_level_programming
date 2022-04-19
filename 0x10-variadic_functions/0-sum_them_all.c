#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum
 *
 * Return: If n == 0 = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;

	va_start(nums, n);
	unsigned int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += vaarg(nums, int);

	va_end(nums);

	return (sum);
}
