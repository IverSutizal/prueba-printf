#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void print_caracter(char *input);
void print_hexa(char *input);
void print_string(char *input);
void print_float(char *input);
void print_floatExpo(char *input);
void print_floatGeneral(char *input);
void print_DecixAsig(char *input);
void print_sigPorcent(char *input);
void print_numDeci(char *input);
void print_numInt(char *input);
void print_octal(char *input);
typedef struct func_struc_spec
{
    void (*function)(char *input);
    char *specifier;
    
} package;

typedef struct lett_spec
{
    char c;
    
} letter;


#endif
