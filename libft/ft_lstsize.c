#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*last;
	int		i;

	i = 0;
	last = lst;
	while (last)
	{
		i++;
		last = last->next;
	}
	return (i);
}
