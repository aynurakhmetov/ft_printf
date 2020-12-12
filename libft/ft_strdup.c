#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	j;
	char	*dup;

	j = 0;
	len = ft_strlen(str);
	if (!(dup = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (j < len)
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
