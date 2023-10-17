#include "main.h"
/**
 * print_string - function accept one parameter
 * @val: parameter
 * Description: print string
 * Return: len
 */
int print_string(va_list val)
{
	char *str;
	int i;
	int len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
