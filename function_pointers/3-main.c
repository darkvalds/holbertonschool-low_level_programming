#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * 
 * 
 */

int main (int argc, char *argv[])
{
    int num1, num2, result;
    int (*opertion)(int,int);
    


if (argc != 4)
{
    printf("error\n");
    return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

opertion = get_op_func(argv[3]);
 if (opertion == NULL)
 {
    printf("error\n");
    return (99);
 }

 if ((argv[3][0] == '/' || argv[3][0] == '%') && num2 == 0)
 {
    printf("error\n");
    return (100);
 }
 result = opertion (num1, num2);
 printf("%d\n", result);
 
 return (0);
}