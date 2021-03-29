#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs)
{
	t_list	*elem;
	t_list	*temp;
	int		i;

	i = 1;
	if (size <= 0)
		return (NULL);
	elem = ft_create_elem(strs[0]);
	temp = elem;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		elem->next = temp;
		temp = elem;
		i++;
	}
	return (elem);
}
