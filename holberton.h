#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * identifiers - struct for identifier and corresponding function pointers
 * @type: type of argument
 * @f: function pointer to corresponding function
 */
typedef struct identifiers
{
        char *type;
        void (*f)();
}id;

int _printf(const char *format, ...);
int _putstring(char *str);
int _putchar(char c);
int pc(va_list valist);
int ps(va_list valist);
int pp(va_list valist);
int pi(va_list valist);

#endif
