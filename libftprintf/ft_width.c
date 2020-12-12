#include "printf.h"

int	ft_width(const char *fmt, int i, char type)
{
	int width;
	int k;

	width = 0;
	k = 0;
	i++;
	while (fmt[i] != type && fmt[i] != '.')
	{
		if ((fmt[i] >= '0') && (fmt[i] <= '9'))
		{
			k++;
			if (k > 1)
				width = width * 10;
			width = width + (fmt[i] - '0');
		}
		i++;
	}
	return (width);
}
