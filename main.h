#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define BUFF_SIZE 1024
int _putchar(char c);
void print_buffer(char buffer[], int *buff_ind);
int _printf(const char *format, ...);
void print_(const char *format, ...);

typedef struct parameters
{
	unsigned int flag;
	unsigned int buffer;
	unsigned int width;
	unsigned int length;
	unsigned int precision;
} params_t;

#endif
