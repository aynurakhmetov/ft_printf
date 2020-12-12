#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenlit;
	size_t	i;

	i = 0;
	lenlit = ft_strlen(little);
	if (!lenlit)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while ((len--) >= lenlit && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			if (ft_memcmp(&big[i], little, lenlit) == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
