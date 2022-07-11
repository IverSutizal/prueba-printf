#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct spec_struc - Srtucture specifier
 * @function : function type va_list
 * @specifier : %"char" specifier
 * Description: Structure of function type and character type.
 */
typedef struct spec_struc
{
/*void (*function)(char *input);*/
	int (*function)(va_list);
	char *specifier;
} package;

int _putchar(char c);

/*_printf function*/
int _printf(const char *format, ...);
package choose_func(char *input);

/*_printf specificiers */
int print_caracter(va_list argss);
/*void print_hexa(char *input);*/
int print_string(va_list argss);
/*void print_float(char *input);*/
/*void print_floatExpo(char *input);*/
/*void print_floatGeneral(char *input);*/
/*void print_DecixAsig(char *input);*/
int print_sigPorcent(va_list argss);
int print_numDeci(va_list argss);
int print_numInt(va_list argss);
/*void print_octal(char *input);*/
#endif
