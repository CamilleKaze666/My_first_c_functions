#include "../include/my_functions.h"
#include <unistd.h>
void my_putchar(char c)
{
	write(1, &c, 1);
}