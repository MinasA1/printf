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
	return (_putchar(c));
}

/**
 * ps - print string
 * @valist: argument list
 * Return: chars printed
 */
int ps(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
		str = "(null)";
	if (str[0] == '\0')
		return (-2);
	return (_putstring(str));
}


/**
 * pd - print decimal
 * @valist: argument list
 * Return: chars printed
 */
int pd(va_list valist)
{
	int n, t, k = 0, i = 0, a = 1, c, e;

	n = va_arg(valist, int);
	t = n;
	while (t != 0)
	{
		t /= 10;
		i++;
	}
	t = i;
	for (i = 1; i < t; i++)
		a *= 10;
	if (n < 0 && n > INT_MIN)
	{
		k += _putchar('-');
		n *= -1;
	}
	if (n == INT_MIN)
	{
		k += _putchar('-');
		a /= 10;
		e = n % 10;
		n = ((n / a) * -1);
		c = 1;
	}
	if (n == 0)
		k += _putchar('0');
	for (i = 0; i < t; i++)
	{
		if (n / a)
		{
			k += _putchar(((n / a) % 10) + '0');
		}
		a /= 10;
	}
	if (c == 1)
		k += _putchar(e + '0');
	return (k);
}


/**
 * pu - print unsigned integer
 * @valist: argument list
 * Return: chars printed
 */
int pu(va_list valist)
{
	unsigned int n, i, a = 1000000000;
	int k = 0;

	n = va_arg(valist, unsigned int);
/*	t = n;
	while (t != 0)
	{
		t /= 10;
		i++;
	}
	t = i;
	for (i = 1; i < t; i++)
		a *= 10;
*/
	if (n == 0)
		k += _putchar('0');
	for (i = 0; i < 10; i++)
	{
		if (n / a)
		{
			k += _putchar(((n / a) % 10) + '0');
		}
		a /= 10;
	}
	return (k);
}

/**
 * px - print lower case hexidecimal
 * @valist: argument list
 * Return: chars printed
 */
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
	while (c >= 0)
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
