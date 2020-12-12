#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != ch)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	if (str[i] == ch)
		return ((char *)&str[i]);
	return (NULL);
}
