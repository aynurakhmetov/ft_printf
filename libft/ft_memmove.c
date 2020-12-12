#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	i = 0;
	if (!des && !src)
		return (NULL);
	to = (unsigned char *)des;
	from = (unsigned char *)src;
	if (to < from)
	{
		while (i < n)
		{
			to[i] = from[i];
			i++;
		}
	}
	if (to > from)
	{
		while (n-- > 0)
			to[n] = from[n];
	}
	return (des);
}
