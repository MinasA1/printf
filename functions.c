#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 *
 * Return: number of chars printed
 */

void _putstring(char *str)
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

int _checktype(char *type, ...)
{
	switch(format[j + 1])
	{
	case 'c':
		
		break;
	case 'i':
		
		break;
	case 'f':
		
		break;
	case 's':
		
		break;
	default :
		break;
	}
}
