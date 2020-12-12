#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str);
	if (ch == '\0')
		return ((char*)&str[i]);
	i--;
	while (str[i] != ch && i > 0)
		i--;
	if (str[i] == ch)
		return ((char *)&str[i]);
	return (NULL);
}
