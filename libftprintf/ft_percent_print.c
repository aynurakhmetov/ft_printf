
#include "printf.h"

int	ft_percent_print(t_prdata data)
{
	int		len;
	char	c;

	len = 1;
	c = '%';
	if (data.flags % 10 == 0)
	{
		if (data.width > 0)
			len = wp_print(data.width, 0, len);
		write(1, &c, 1);
	}
	if (data.flags % 10 == 1)
	{
		write(1, &c, 1);
		len = wp_print(data.width, 0, len);
	}
	if (data.flags % 10 == 2)
	{
		if (data.width > 0)
			len = len + null_print(data.width - len);
		write(1, &c, 1);
	}
	return (len);
}
