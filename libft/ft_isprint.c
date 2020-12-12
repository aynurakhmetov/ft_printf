#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 126)
		return (8);
	return (0);
}
