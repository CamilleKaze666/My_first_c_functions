#include "../include/my_functions.h"

int my_str_is_num(char *to_compare)
{
	int to_copmpare_length = my_strlen(to_compare);
	int idx_number = 0;
	if (to_copmpare_length == 0)
	{
		return (0);
	}
	while (idx_number < to_copmpare_length)
	{

		if (48 > to_compare[idx_number] && 57 < to_compare[idx_number])
		{
			return (0);
		}
		idx_number++;
	}
	return (1);
}