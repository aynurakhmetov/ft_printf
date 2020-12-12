#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*des;

	if (!(des = (void *)malloc(num * size)))
		return (NULL);
	ft_bzero(des, num * size);
	return (des);
}
