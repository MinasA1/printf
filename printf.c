#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: char string that contains directives
 *
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, k = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			k += checktype(format[i + 1], args);
			i++;
		}
		else
			k += _putchar(format[i]);
	}

	va_end(args);

	return (k);
}
