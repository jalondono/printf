#include "holberton.h"
#include <unistd.h>

/**
 *convert - print whatever
 *Result: a size of string to print
 *@num: string to printf
 *@s: caracter
 *Return: value depending on function
 */

int convert(unsigned int num, char s)
{
	static const char Representation[] = "0123456789ABCDEF";
	static const char representation[] = "0123456789abcdef";
	static char buffer[200];
	char *ptr;
	int size = 0;
	int base = 0;

	switch (s)
	{
	case 'u':
		base = 10;
		break;
	case 'o':
		base = 8;
		break;
	case 'x': case 'X':
		base = 16;
		break;
	}
	ptr = &buffer[200];
	*ptr = '\0';
	do

	{
		if (s == 'x')
			*--ptr = representation[num % base];
		else
			*--ptr = Representation[num % base];
		num /= base;
		} while (num != 0);


		size = _strlen(ptr);
		write(1, ptr, size);
		return (size);
}
