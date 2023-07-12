#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_list_print(t_list *lst)
{
	while (lst)
	{
		printf("%s ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

void	ft_upper_a(void *data)
{
	char	*string;

	string = data;
	string[0] = 'A';
}

int	main(void)
{
	t_list	**new_list;
	t_list	*node;

	*new_list = ft_lstnew(strdup("Pepe"));
	node = ft_lstnew(strdup("Hola"));
	ft_lstadd_front(new_list, node);
	node = ft_lstnew(strdup("Que"));
	ft_lstadd_front(new_list, node);
	node = ft_lstnew(strdup("Tal"));
	ft_lstadd_front(new_list, node);
	printf("Lista inicial: ");
	ft_list_print(*new_list);
	ft_list_foreach(*new_list, ft_upper_a);
	printf("\nLista modificada: ");
	ft_list_print(*new_list);
	return (0);
}
