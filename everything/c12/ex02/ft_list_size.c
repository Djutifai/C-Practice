#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = begin_list;
	while (temp != 0)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
