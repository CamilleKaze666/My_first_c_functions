#include "../include/my_functions.h"
#include <stdlib.h>

char *my_catstr(char *stringOne, char *stringTwo)
{
	int string_one_length = my_strlen(stringOne);
	int string_two_length = my_strlen(stringTwo);
	int sizeOfStr = string_one_length + string_two_length;
	char *stringReturn = malloc(sizeof(char) * (sizeOfStr + 1));
	
	
	for (int idxStringOne = 0; idxStringOne < string_one_length; idxStringOne++)
	{
		stringReturn[idxStringOne] = stringOne[idxStringOne];
	}
	for (int idxStringTwo = 0; idxStringTwo < (sizeOfStr - string_one_length); idxStringTwo++)
	{
		stringReturn[string_one_length + idxStringTwo] = stringTwo[idxStringTwo];
	}
	stringReturn[sizeOfStr] = '\0';
	return stringReturn;
}
