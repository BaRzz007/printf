#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints formatted string
 * @fmt: formatted string
 * Return: number of characters printed
 */
int _printf(const char *fmt, ...)
{
	va_list args;
	char *temp, c;
	int i, n, j;

	n = 0;
	i = 0;
	va_start(args, fmt);
	while (fmt && fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			switch (fmt[i])
			{
				case 's':
					temp = va_arg(args, char *);
					j = 0;
					while (temp[j] != '\0')
					{
						write(1, &temp[j], 1);
						n++;
						j++;
					}
					i++;
					break;
				case 'c':
					c = va_arg(args, int);
					write(1, &c, 1);
					n++;
					i++;
					break;
				case '%':
					write(1, &fmt[i], 1);
					n++;
					i++;
					break;
				default:
					write(1, &fmt[i - 1], 2);
					i++;
			}
		}
		else
		{
			write(1, &fmt[i], 1);
			i++;
			n++;
		}
	}
	return (n);
}
