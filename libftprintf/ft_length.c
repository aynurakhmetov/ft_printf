#include "printf.h"

int	ft_length(const char *fmt, int i, char type)
{
	int	len;

	len = 0;
	i++;
	while (fmt[i] != type)
	{
		len++;
		i++;
	}
	len++;
	return (len);
}
