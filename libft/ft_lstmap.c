#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !(new = ft_lstnew(f(lst->content))))
		return (NULL);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&tmp, new);
	}
	return (tmp);
}
