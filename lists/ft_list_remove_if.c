#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*ant;
	t_list	*del;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	del = *begin_list;
	ant = NULL;
	while (del)
	{
		if (cmp(data_ref, del->data) == 0)
		{
			// Si el nodo a eliminar es el primero, se cambia el inicio de la lista al siguiente nodo.
			if (ant == NULL)
				*begin_list = del->next;
			// Si no lo es, se ajusta el enlace del nodo anterior para que apunte al nodo después del nodo a eliminar
			else
				ant->next = del->next;
			free(del);
			// Finalmente, se establece el siguiente nodo a examinar.

			// Si se eliminó el primer nodo, entonces del se establece al inicio de la lista
			if (ant == NULL)
				del = *begin_list;
			// Si no, del se establece al nodo siguiente a ant
			else
				del = ant->next;
		}
		//  Si los datos en el nodo actual no coinciden con los datos de referencia, 
		//ant se actualiza al nodo actual y del se mueve al siguiente nodo.
		else
		{
			ant = del;
			del = del->next;
		}
	}
}
