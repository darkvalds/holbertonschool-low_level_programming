#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for the calculator program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, or specific error codes on failure
 */

int main (int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int,int);
    


if (argc != 4)
{
	printf("Error\n");
	return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operator = get_op_func(argv[2]);
	if (operator == NULL)
 {
	printf("Error\n");
	return (99);
 }

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
 {
	printf("Error\n");
	return (100);
 }
	result = operator (num1, num2);
	printf("%d\n", result);
 
	return (0);
}