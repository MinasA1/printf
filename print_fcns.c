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
	int n, k = 0, i, a = 1000000000;

	n = va_arg(valist, int);
	if (n < 0)
	{
		k += _putchar('-');
		n *= -1;
	}
	if (n == 0)
		k += _putchar('0');
	for (i = 0; i < 10; i++)
	{
		if (n / a != 0)
			k += _putchar(((n / a) % 10) + '0');
		a /= 10;
	}
	return (k);

}
