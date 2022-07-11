#include <stdio.h>
#include "main.h"

/**
 * print_caracter - Specifier
 * @argss : arguments va_list
 * Description: Function prints a single character.
 * Return: Length number.
 */
int print_caracter(va_list argss)
{
	char c;
	int i = 0;

	c = va_arg(argss, int);
	_putchar(c);
	i++;
	return (i);
}

/*void print_hexa(char *input){printf("hexa\n");}*/
/**
 * print_string - Specifier
 * @argss : arguments va_list
 * Description: function prints a string of characters.
 * Return: Length number.
 */
int print_string(va_list argss)
{
	char *s;
	int i = 0;

	s = va_arg(argss, char*);
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/*void print_float(char *input){printf("float\n");}*/
/*void print_floatExpo(char *input){printf("floatExpo\n");}*/
/*void print_floatGeneral(char *input){printf("floatGeneral\n");}*/
/*void print_DecixAsig(char *input){printf("DecixAsig\n");}*/
/**
 * print_sigPorcent - Specifier
 * @argss : arguments va_list
 * Description: function prints a percentage character.
 * Return: Length number 1.
 */
int print_sigPorcent(va_list argss __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
/**
 * print_numDec_Int - Specifier
 * @argss : arguments va_list
 * Description: function prints numbers.
 * Return: Length of the number.
 */
int print_numDec_Int(va_list argss)
{
	int i = 0, j = 0, n = 0;
	char *str;

	i = va_arg(argss, int);

	if (i < 0)
	{
		i = -i;
		_putchar('-');
		n = 1;
	}
	str = convert(i, 10);
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}

	return (j + n);
}
/*void print_octal(char *input){printf("octal\n");}*/
