#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the charactr
 * @c: the character
 * Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
