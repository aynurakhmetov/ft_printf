#include "libft.h"

void	*ft_memset(void *des, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)des;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (des);
}
