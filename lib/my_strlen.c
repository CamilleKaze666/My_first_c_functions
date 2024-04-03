#include "../include/my_functions.h"

int my_strlen(char *string)
{
	int index = 0;

	while (string[index] != '\0')
	{
		index++;
	}
	return index;
}
