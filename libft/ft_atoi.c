#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	k;

	i = 0;
	nb = 0;
	k = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			k = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb = nb * (k);
	return (nb);
}
