#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

#define OUTPUT_BUF_SIZE 1024
#define PARAMS_INT (0, 0, 0, 0, 0)

#define CONVERT_LOWERCASE


typedef struct parameters
{
	unsigned int flag;
	unsigned int buffer;
	unsigned int width;
	unsigned int precision;
	unsigned int length;
	
} params_t;

/*printing functions*/
int print_char(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_s(va_list ap, params_t *params);

int _printf(const char *format, ...);
#endif
