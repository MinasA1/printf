#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * union strings - saves the type and value of an arguement
 * @t: type of argument
 * @s: value of argument
 */
typedef union strings
{
	char t;
	char *s;
} type;

int _printf(const char *format, ...);

#endif
