#include "ft_list.h"

void		ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*data_cleaner;
	t_list	*next_cleaner;

	data_cleaner = begin_list;
	next_cleaner = begin_list;
	while (data_cleaner)
	{
		free_fct(data_cleaner->data);
		data_cleaner = data_cleaner->next;
		next_cleaner->next = NULL;
		free(next_cleaner->next);
		free(next_cleaner);
		next_cleaner = data_cleaner;
	}
}
