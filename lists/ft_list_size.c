#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int num_elements = 0;
	t_list *node = begin_list;	

	while(node != NULL)
	{
		num_elements++;
		node = node->next;
	}
	return num_elements;
}
