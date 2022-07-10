#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#define NULL ((void *)0)
#include "main.h"

int _printf(const char *format, ...);
package choose_func(char *input);

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
	int len3, len4, len5, len6;
	/*unsigned int ui;*/
	/*void *addr;*/

	len = _printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	printf("----------------\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len2);

	/*ui = (unsigned int)INT_MAX + 1024;*/

	/*addr = (void *)0x7ffe637541f0;*/
	/*printf("Length:[%d, %i]\n", len2, len2);*/
	/*  _printf("Length:[%d, %i]\n", len, len);*/

        len3 = printf("Hol%s.", "berton");
        printf("%d\n", len3);
        len4 =_printf("Hol%s.", "berton");
        printf("%d\n", len4);

	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");

	len5 = printf("Char:[%c]\n", 'H');
	printf("%d\n", len5);
	len6 = _printf("Char:[%c]\n", 'H');
	printf("%d\n", len6);
	return (0);
}

/**
 * _printf - Produce output according to a format as described below.
 *
 * @format: A string with the format wished.
 *
 * Return: The length of the final string with the format
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, i = 0;
	char input[3];
	/*char *str;*/
	package operation;

	va_start(args, format); /* Initialize _printf arguments's of format*/
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			input[0] = format[i];
			input[1] = format[i + 1];
			input[2] = '\0';

			operation = choose_func(input);

			if (operation.function != NULL)
			{
				i = i + 2;
				/*printf("exist\n");*/
				/*str = va_arg(args, char*);*/
				len += operation.function(args);
			}
			else
			{
				printf("operation doesn't exist\n");
			}
		}
		else
		{
			_putchar(format[i]);

			i++;
			len++;
		}
	}
	va_end(args);
	return (len);
}

package choose_func(char *input)
{
	int i = 0;
	package options[] = {
		/*{print_hexa, "%x"},*/
		{print_string, "%s"},
		{print_caracter, "%c"},
		/*{print_float, "%f"},
		{print_floatExpo, "%e"},
		{print_floatGeneral, "%g"},
		{print_DecixAsig, "%u"},
		{print_sigPorcent, "%%"},
		{print_numInt, "%i"},
		{print_numDeci, "%d"},
		{print_octal, "%o"},*/
		{NULL, NULL}
	};

	for (i = 0; options[i].function != NULL; i++)
	{
		if (strcmp(options[i].specifier, input) == 0)
	{
		/*(*(options)->specifier + 1) == *(input + 1)*/
		return (options[i]);
	}
	}
	return (options[i]);
}
