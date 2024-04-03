#include "../include/my_functions.h"
#include <stdlib.h>

char *my_num_to_str(int to_parse)
{
	int nbr_at_idx = 1;
	int length = 1;
	int to_parse_remain = to_parse;

	while (1 <= to_parse_remain)
	{
		to_parse_remain /= 10;
		length++;
	}

	char *result = malloc(sizeof(char) * (length + 1));

	while (nbr_at_idx < length)
	{

		result[length - nbr_at_idx - 1] = to_parse % 10 + 48;
		to_parse = to_parse / 10;
		nbr_at_idx++;
	}
	result[length + 1] = '\0';
	return result;
}