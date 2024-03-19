#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *new;

	new = begin_list;
	while (new)
	{
		new = new->next;
		i++;
	}
	return (i);
}
