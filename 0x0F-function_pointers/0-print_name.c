#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: A pointer to a function that prints a name
 */
void printname(char *name, void(*f)(char *))
{
	if (f != NULL)
		f(name);
}
