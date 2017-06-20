#include "holberton.h"

int pxx(va_list valist)
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
                        k += _putchar((hex[c] % 10) + 'A');
                }
		c--;
	}
	return (k);

}
int po(va_list valist)
{
	unsigned int n;
	int k = 0, c = 0, oct[10];


	n = va_arg(valist, unsigned int);
	if (n == 0)
		k += _putchar('0');
	while (n != 0)
	{
		oct[c] = n % 8;
		n /= 8;
		c++;
	}
	c--;
	while(c >= 0)
	{
		if (oct[c] >= 0 && oct[c] < 9)
                        k += _putchar(hex[c] + '0');
		c--;
	}
	return (k);

}
