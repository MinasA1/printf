#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * union strings - saves the type and value of an arguement
 * @t: type of argument
 * @s: value of argument
 */
typedef union strings
{
	char t;
	char *s;
	int i;
	float f;
	char c;
} type;

int _printf(const char *format, ...);
int _putstring(char *str);
#endif
