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

	if (str == NULL)
	{
		_printf("(null)");
		return (printed + 6);
	}

	int len = 0;
	while (str[len])
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;
	}re
		 n (printed);
}

