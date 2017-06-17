#include "holberton.h"

/**
 * _print - produces output according to a format
 * @format: char string that contains directives
 *
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, k = 0;
	
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '\\')
		{
			k+=checkspecial(format[i + 1]);
			i++;
		}
		else if (format[i] == '%')
		{
			k+=checktype(format[i + 1], args);
			i++;
		}
		else
			k+=_putchar(format[i]);
	}
	return (k);
}
