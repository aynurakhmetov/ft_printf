#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch = ch - 32;
	return (ch);
}
