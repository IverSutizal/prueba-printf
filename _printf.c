#include "main.h"
#include <stdio.h>
#include <string.h>
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
	package operation;

	va_start(args, format); /* Initialize _printf arguments's of format \
*/
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
				len += operation.function(args);
			}
			else
			{
				_putchar(format[i]);
                                i++;
                                len++;
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
/*{print_float, "%f"},*/
/*{print_floatExpo, "%e"},*/
/*{print_floatGeneral, "%g"},*/
/*{print_DecixAsig, "%u"},*/
		{print_sigPorcent, "%%"},
		{print_numDec_Int, "%i"},
		{print_numDec_Int, "%d"},
/*{print_octal, "%o"},*/
		{NULL, NULL}
	};

	for (i = 0; options[i].function != NULL; i++)
	{
		if (strcmp(options[i].specifier, input) == 0)
		{
			return (options[i]);
		}
	}
	return (options[i]);
}
