#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				printed = printf_integer(args, printed);
			}
			else if (*format == 'r')
			{
				_putchar('%');
				_putchar('r');
				printed += 2;
			}
			else if (*format == '%')
			{
				_putchar('%');
				printed++;
			}
			else
			{
				printed = selector(format, args, printed);
			}
		}
		else
		{
			_putchar(*format);
			printed++;
		}
		format++;
	}
va_end(args);
return (printed);
}
