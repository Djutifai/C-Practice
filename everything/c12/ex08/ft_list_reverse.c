#include "ft_list.h"
#include <stdlib.h>

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*head;
	t_list	*ltemp;
	t_list	*rtemp;

	head = *begin_list;
	ltemp = NULL;
	rtemp = NULL;
	while (head != 0)
	{
		rtemp = head->next;
		head->next = ltemp;
		ltemp = head;
		head = rtemp;
	}
	*begin_list = ltemp;
}
