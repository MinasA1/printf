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
	int i, j, k = 0;
	char *spec;

	va_start(args, format);
	for (i = 0; format[i]; i++)
		;
	type tp[i + 1];

	for (j = 0 ; j < i; j++)
	{
		if (format[j] == "%")
		{
			switch (format[j + 1])
			{
			case 'c':
				tp[k].c = va_arg(args, int);
				k++;
				break;
			case 'i':
				tp[k].i = va_arg(args, int);
				k++;
				break;
			case 'f':
				tp[k].f = va_arg(args, double);
				k++;
				break;
			case 's':
				tp[k].s = va_arg(args, char *);
				k++;
				break;
			default:
				break;
			}
		}
	}
	return (k);
}
