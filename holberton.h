#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct identifiers - struct for identifier and corresponding func pointers
 * @type: type of argument
 * @f: function pointer to corresponding function
 */
typedef struct identifiers
{
	char *type;
	int (*f)(va_list list);
} id;

int _printf(const char *format, ...);
int _putstring(char *str);
int _putchar(char c);
int checktype(char tp, va_list list);
int pc(va_list valist);
int ps(va_list valist);
int pu(va_list valist);
int pd(va_list valist);
int px(va_list valist);
int pxx(va_list valist);
int po(va_list valist);
int pp(va_list valist);
int pb(va_list valist);

#endif
