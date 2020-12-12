#include "libft.h"

size_t	ft_strlcpy(char *des, const char *src, size_t size)
{
	size_t	lens;
	size_t	i;

	i = 0;
	lens = ft_strlen(src);
	if (!des)
		return (0);
	if (size == 0)
		return (lens);
	while ((i < size - 1) && (src[i] != '\0'))
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (lens);
}
