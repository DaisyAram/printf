#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);

typedef struct parameters
{
	unsigned int flag;
	unsigned int buffer;
	unsigned int width;
	unsigned int length;
	unsigned int precision;
} params_t;
#endif
