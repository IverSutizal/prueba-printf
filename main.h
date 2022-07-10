#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct func_struc_spec
{
        /*void (*function)(char *input);*/
        int (*function)(va_list);
        char *specifier;
} package;

int _putchar(char c);
int print_caracter(va_list argss);
/*void print_hexa(char *input);*/
int print_string(va_list argss);
/*void print_float(char *input);
void print_floatExpo(char *input);
void print_floatGeneral(char *input);
void print_DecixAsig(char *input);
void print_sigPorcent(char *input);
void print_numDeci(char *input);
void print_numInt(char *input);
void print_octal(char *input);
*/
#endif
