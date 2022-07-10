#include <stdio.h>
#include "main.h"

int print_caracter(va_list argss)
{
	char c;
	int i = 0;

	c = va_arg(argss, int);
	_putchar(c);
	i++;
	return (i);
}

/*void print_hexa(char *input)
{
    printf("hexa\n");
}*/

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

/*void print_float(char *input)
{
    printf("float\n");
}

void print_floatExpo(char *input)
{
  printf("floatExpo\n");
}

void print_floatGeneral(char *input)
{
  printf("floatGeneral\n");
}

void print_DecixAsig(char *input)
{
    printf("DecixAsig\n");
}

void print_sigPorcent(char *input)
{
    printf("sigPorcent\n");
}

void print_numDeci(char *input)
{
  printf("numDeci\n");
}

void print_numInt(char *input)
{
  printf("numInt\n");
}

void print_octal(char *input)
{
  printf("octal\n");
}
*/
