#include "printf.h"

int	ft_typeprint(va_list *ap, t_prdata data)
{
	int len;

	len = -1;
	if (data.type == 'd' || data.type == 'i')
		len = ft_di_print(ap, data);
	if (data.type == 'c')
		len = ft_c_print(ap, data);
	if (data.type == 's')
		len = ft_s_print(ap, data);
	if (data.type == 'p')
		len = ft_p_print(ap, data);
	if (data.type == 'u')
		len = ft_u_print(ap, data);
	if (data.type == 'x' || data.type == 'X')
		len = ft_x_print(ap, data);
	if (data.type == '%')
		len = ft_percent_print(data);
	return (len);
}
