#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
