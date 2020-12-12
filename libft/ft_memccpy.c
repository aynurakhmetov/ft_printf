#include "libft.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	to = (unsigned char *)des;
	from = (unsigned char *)src;
	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		to[i] = from[i];
		if (to[i] == c)
			return (des + i + 1);
		i++;
	}
	return (NULL);
}
