#ifndef my_functions_h
#define my_functions_h

#include <stdlib.h>
#include <unistd.h>

int int_is_in_list(int to_compare, int *list, int length);

char *my_catstr(char *stringOne, char *stringTwo);

char *my_num_to_str(int to_parse);

void my_putchar(char c);

void my_putstr(char *string);

int my_str_is_num(char *to_compare);

int my_str_to_num(char *to_parse);

int my_strlen(char *string);

#endif