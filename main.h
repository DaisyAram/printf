#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define BUFF_SIZE 1024

int _printf(const char *format, ...);

typedef struct parameters
{
	unsigned int flag;
	unsigned int buffer;
	unsigned int width;
	unsigned int length;
	unsigned int precision;
} params_t;

/**
 * struct fmt - struct operator
 * @fmt - format
 * @function - function associated
 */
struct fmt
{
	char fmt;
	int(*function)(va_list, char[]);
} fmt_t;
/**
 * typedef struct fmt fmt_t - struct operator
 * @fmt: format
 * @fmt_t: function associated
 */
typedef struct fmt, fmt_t;

#endif
