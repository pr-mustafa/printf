#include "main.h"
/**
 * _strlen - function to check len
 * @str: string parameter
 * Return: len of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
