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

int pu(va_list valist)
{
	unsigned int n, i, a = 1000000000;
	int k = 0;

	n = va_arg(valist, unsigned int);
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

int px(va_list valist)
{
	unsigned int n;
	int k = 0, c = 0;
	char hex[10];


	n = va_arg(valist, unsigned int);
	if (n == 0)
		k += _putchar('0');
	while (n != 0)
	{
		hex[c] = n % 16;
		n /= 16;
		c++;
	}
	c--;
	while(c >= 0)
	{
		if (hex[c] >= 0 && hex[c] <= 9)
                        k += _putchar(hex[c] + '0');
                else
                {
                        k += _putchar((hex[c] % 10) + 'a');
                }
		c--;
	}
	return (k);

}
