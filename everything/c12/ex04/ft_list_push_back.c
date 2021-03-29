#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;
	t_list *temp;

	elem = ft_create_elem(data);
	temp = *begin_list;
	if (*begin_list == 0)
	{
		elem->next = *begin_list;
		*begin_list = elem;
		return ;
	}
	while (temp != 0)
	{
		if (temp->next == 0)
		{
			temp->next = elem;
			break ;
		}
		temp = temp->next;
	}
}
