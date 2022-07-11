#include <stdio.h>
#include "main.h"
/**
 * convert - Convert number
 * @num : number to convert
 * @base : specifier base
 * Description: Function to convert numbers in characters.
 * Return: Length of the number.
 */
char *convert(unsigned int num, int base)
{
	char representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
