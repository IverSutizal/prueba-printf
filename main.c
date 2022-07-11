#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#define NULL ((void *)0)
#include "main.h"

/**
 * main - Returns the length of a string.
 *
 *
 *
 * Return: The length of an string
 */

int main(void)
{
	int len;
	int len2;
	int len3, len4, len5, len6, len7, len8, i, d;
	/*unsigned int ui;*/
	/*void *addr;*/

	len = _printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	_printf("Hola%k\n", len);
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len2);

	/*ui = (unsigned int)INT_MAX + 1024;*/

	/*addr = (void *)0x7ffe637541f0;*/
	d = printf("Length:[%d, %i]\n", len2, len2);
	printf("%d\n", d);
	i = _printf("Length:[%d, %i]\n", len, len);
	printf("%d\n", i);

	len3 = printf("Hol%s.", "berton");
	printf("%d\n", len3);
	len4 = _printf("Hol%s.", "berton");
	printf("%d\n", len4);

	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");

	len5 = printf("Char:[%c]\n", 'H');
	printf("%d\n", len5);
	len6 = _printf("Char:[%c]\n", 'H');
	printf("%d\n", len6);

	len7 = printf("Percent:[%%]\n");
	printf("%d\n", len7);
	len8 = _printf("Percent:[%%]\n");
	printf("%d\n", len8);
	return (0);
}
