#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * File: function_pointers.h
 * Description: Header file containing prototypes for all functions
 *              used in the 0x0E-function_pointers directory.
 */

#include <stddef.h>
#include <stdlib.h>

/* Prototype for a function that prints a name */
void print_name(char *name, void (*f)(char *));

/* Prototype for a function that executes a function on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Prototype for a function that searches for an integer in an array */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
