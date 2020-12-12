#include "libft.h"

size_t	ft_strlcat(char *des, const char *src, size_t size)
{
	size_t		res;
	size_t		i;
	size_t		j;
	size_t		lento;
	size_t		lenfrom;

	lento = ft_strlen(des);
	lenfrom = ft_strlen(src);
	res = lento + lenfrom;
	i = 0;
	if (size <= lento)
		return (lenfrom + size);
	while ((des[i] != '\0') && (i < (size - 1)))
		i++;
	j = 0;
	while ((src[j] != '\0') && (i < (size - 1)))
	{
		des[i] = src[j];
		i++;
		j++;
	}
	des[i] = '\0';
	return (res);
}
