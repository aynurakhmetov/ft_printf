#include "printf.h"

t_prdata	ft_get_flags(t_prdata data, const char *fmt, int i)
{
	data.length = ft_length(fmt, i, data.type);
	data.flags = ft_flags(fmt, i, data.type);
	data.width = ft_width(fmt, i, data.type);
	data.precision = ft_precision(fmt, i, data.type);
	return (data);
}

t_prdata	ft_parser(const char *fmt, int i)
{
	t_prdata	data;
	int			k;

	k = i;
	data.length = 0;
	data.type = ft_type(fmt, i);
	k++;
	while (fmt[k] && fmt[k] != data.type)
	{
		if ((fmt[k] >= 'a' && fmt[k] <= 'z')
				|| (fmt[k] >= 'A' && fmt[k] <= 'Z'))
			break ;
		if (fmt[k] == '%')
		{
			data.type = '%';
			break ;
		}
		k++;
	}
	if (data.type != 0)
		data = ft_get_flags(data, fmt, i);
	return (data);
}
