#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst && ++count)
		lst = lst->next;
	return (count);
}
