#include "holberton.h"
#include <unistd.h>

/**
 * _putstring - prints a string followed by a new line
 * @str: string to print
 *
 * Return: number of chars printed
 */

int _putstring(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
/*	write(1, "\n", 1);*/
	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * checktype - matches a conversion specifier with its corresponding function
 * @tp: char passed in by format
 * @list: va_list from which to access
 * Return: number of chars printed
 */
int checktype(char tp, va_list list)
{
	id id[] = {
		{"c", pc},
		{"d", pd},
/*
 *		{"e", pe}
 *		{"f", pf}
 *		{"g", pg}
 */
		{"o", po},
		{"i", pd},
/*
 * {"o", po}
 */
		{"b", pb},
		{"s", ps},
		{"u", pu},
		{"x", px},
		{"X", pxx},
		{"p", pp}
	};
	int i, sum = 0;

	for (i = 0; i < 10; i++)
	{
		if (id[i].type[0] == tp)
			sum += id[i].f(list);
	}
	if (sum == 0)
	{
		if (tp != '%')
		{
			sum += _putchar('%');
			sum += _putchar(tp);
		}
		else
			sum += _putchar('%');
	}
	return (sum);
}
