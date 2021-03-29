#include "ft_list.h"
#include <stdlib.h>

void		ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void*))
{
	t_list	*buf;
	t_list	*left;
	t_list	*right;

	buf = *begin_list;
	left = ((void*)0);
	while (buf)
	{
		right = buf->next;
		if (cmp(buf->data, data_ref) == 0)
		{
			if (left)
				left->next = buf->next;
			else
				*begin_list = buf->next;
			free_fct(buf->data);
			buf->next = ((void*)0);
			free(buf->next);
			free(buf);
			buf = ((void*)0);
		}
		left = buf;
		buf = right;
	}
}
