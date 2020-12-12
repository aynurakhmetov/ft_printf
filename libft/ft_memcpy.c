#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*r;
	size_t			i;

	if (!des && !src)
		return (NULL);
	s = (unsigned char *)des;
	r = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		s[i] = r[i];
		i++;
	}
	return (des);
}
