#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)arr;
	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
