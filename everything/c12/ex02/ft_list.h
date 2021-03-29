#ifndef FT_LIST_H
# define FT_LIST_H
# include <unistd.h>

typedef	struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

t_list					*ft_create_elem(void *data);
int						ft_list_size(t_list *begin_list);
#endif
