#include "ft_list.h"
#include <stdlib.h> 
#include <unistd.h> 

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

//		Main Test
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0' && s2[index] != '\0'))
		index++;
	return (s1[index] - s2[index]);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		f(begin_list -> data);
		begin_list = begin_list -> next;
	}
}

t_list	*ft_new_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	t_list	*test_list;
	t_list	**begin_list;

	begin_list = &test_list;
	test_list = ft_new_elem("Hola ");
	test_list->next = ft_new_elem("Mundo...");
	test_list->next->next = ft_new_elem("!");
	test_list->next->next->next = ft_new_elem("!");
	ft_list_foreach(test_list, (void *)ft_putstr);
	ft_putstr("\n");
	ft_list_remove_if(begin_list, "!", ft_strcmp);
	ft_putstr("Removing the dot -> (!)\n");
	ft_list_foreach(test_list, (void *)ft_putstr);
	ft_putstr("\n");
}
