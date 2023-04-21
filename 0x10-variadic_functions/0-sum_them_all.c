
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: argument
 *
 *Return: 0 or sum
 */
 
 int sum_them_all(const unsigned int n, ...)
 {
    va_list countPtr;
    
    va_start(countPtr, n);
    
    unsigned int i;
    unsigned int sum = 0;

    if (n == 0)
        return (0);
    for (i = 0; i < n; i++){
        sum = sum + va_arg(countPtr, int);
    }

    va_end(countPtr);
    return (sum);
 }