#include "main.h"
/**
 * printf_char - printf character
 * @val: argment
 * Return: 0
 */
int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (0);
}
