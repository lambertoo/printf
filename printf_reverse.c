#include "main.h"

/**
 * printf_reverse - prints a string in reverse
 * @args: va_list containing the string to be reversed
 * @printed: current count of printed characters
 * Return: updated count of printed characters
 */
int printf_reverse(va_list args, int printed)
{
	char *str = va_arg(args, char *);
	int len = 0;
	int i;
	
	if (str == NULL)
	{
		_printf("(null)");
		return (printed + 6);
	}
	if (str[0] == '%' && str[1] == 'r')
	{
		_putchar('%');
		_putchar('r');
		printed += 2;
		return (printed);
	}
	while (str[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;
	}
return (printed);
}
