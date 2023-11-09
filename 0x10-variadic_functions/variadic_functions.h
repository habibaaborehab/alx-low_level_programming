#ifndef _VARIADIC_H_
#define _VARIADIC_H_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
/**
 * struct types - structure of types
 *
 * @z: The operator sign
 * @f: The function associated with the operator
 */
typedef struct types
{
	char z;
	void (*f)(va_list);
} types_t;

#endif
