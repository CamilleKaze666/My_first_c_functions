#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/my_functions.h"
#include <unistd.h>

int main(int ac, char **av)
{

	char *result = my_catstr("123" ,"456");
	printf("%s", result);

	return 0;
}