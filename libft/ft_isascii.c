#include "libft.h"

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (8);
	return (0);
}
