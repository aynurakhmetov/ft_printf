#include "printf.h"

int	ft_c_print(va_list *ap, t_prdata data)
{
	int		len;
	char	c;

	len = 1;
	c = (char)va_arg(*ap, int);
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
			len = wp_print(data.width, 0, len);
		write(1, &c, 1);
	}
	return (len);
}
