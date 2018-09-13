#include "includes/wolf.h"

int		ft_count(const char *str, char c)
{
	int	count;
	int	found;

	found = 0;
	count = 0;
	while (*str != '\0')
	{
		if (found == 1 && *str == c)
		{
			found = 0;
		}
		if (found == 0 && *str != c)
		{
			found = 1;
			count++;
		}
		str++;
	}
	return (count);
}
