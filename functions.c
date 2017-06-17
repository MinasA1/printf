#include "holberton.h"
#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
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
	return (write(1, &c, 1));
}

int _checktype(char tp, va_list list)
{
	id id[] =
	{
		{"c", pc},
		{"d", pd},
/*
		{"e", pe}
		{"f", pf}
		{"g", pg}
		{"i", pi}
		{"o", po}
*/
		{"s", ps},
/*
		{"u", pu}
		{"x", px}
*/
		{"%", pp}
	};
	int i, sum = 0;
	
	for (i = 0; i < 11; i++)
	{
		if (id[i].type[0] == tp)
			sum += id[i].f(list);
		else 
			sum += _putchar(tp);
	}
	return (sum);
}
