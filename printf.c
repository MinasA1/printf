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
	int i, k = 0 , j;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			j = checktype(format[i + 1], args);
			if (j == -1)
				return (j);
			k += j;
			i++;
		}
		else
		{
			j = _putchar(format[i]);
			if (j == -1)
				return (j);
			k += j;
		}
	}
	va_end(args);

	return (k);
}
