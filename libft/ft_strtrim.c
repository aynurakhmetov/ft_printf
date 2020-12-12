#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	lens;
	size_t	lenstr;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	lens = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	if (i < lens)
		while (ft_strchr(set, s1[lens - 1]) != NULL)
			lens--;
	else
		return (ft_strdup(""));
	lenstr = lens - i;
	str = ft_substr(s1, i, lenstr);
	return (str);
}
