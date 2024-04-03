#include "../include/my_functions.h"

void my_putstr(char *string)
{
	int length = my_strlen(string);
	int i = 0;
	while (i < length)
	{
		my_putchar(string[i]);
		i++;
	}
}
