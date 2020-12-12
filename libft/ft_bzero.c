#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*r;
	size_t			i;

	r = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		r[i] = '\0';
		i++;
	}
}
