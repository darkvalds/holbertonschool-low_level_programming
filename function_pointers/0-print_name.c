#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a string and prints it.
 *
 * Description: This function takes a string (name) and a function pointer (f),
 *              and uses the function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

