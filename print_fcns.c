#include "holberton.h"
/**
 * pc - print char
 * @valist: argument list
 * Return: chars printed
 */
int pc(va_list valist)
{
	char c;

	c = va_arg(valist, int);

	_putchar(c);
	return (1);
}

int ps(va_list valist)
{
	char *str;
	int i;

	str = va_arg(valist, char *);
	i = _putstring(str);
	return (i);
}

int pp(va_list valist __attribute__((unused)))
{
	_putchar('%');
	return (1);
}


int pd(va_list valist)
{
	int n, k = 0;

	n = va_arg(valist, int);


	k+= _putchar(n + '0');
/*
	while (n >= 10)
	{
		n = n / 10;
		k+= _putchar((n % 10) * sign);
		}*/
	return (k);

}
