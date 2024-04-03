#include "../include/my_functions.h"

int my_str_to_num(char *to_parse)
{
	int result = 0;
	int nbr_at_idx = 0;
	int to_parse_length = my_strlen(to_parse);
	int to_parse_is_num = my_str_is_num(to_parse);

	if (to_parse_is_num == 1)
	{
		while (nbr_at_idx != to_parse_length)
		{
			if (to_parse[nbr_at_idx] == 48)
			{
				result += 0;
			}
			else
			{
				int final_int = to_parse[nbr_at_idx] - 48;
				int factor = 1;
				int i = 0;

				while (i < (to_parse_length - nbr_at_idx - 1))
				{
					factor *= 10;
					i++;
				}
				result += (final_int * factor);
			}
			nbr_at_idx++;
		}
		return result;
	}
	else
	{
		return to_parse_is_num;
	}
}
