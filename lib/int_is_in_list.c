#include "../include/my_functions.h"

int int_is_in_list(int to_compare, int *list, int length)
{
	int idx = 0;
	int boolean_result = 0;

	while (idx < length)
	{
		if (to_compare == list[idx])
		{
			return (1);
		}
		idx++;
	}
	return (0);
}