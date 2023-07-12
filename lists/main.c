#include <stdio.h>  // Estamos incluyendo la librería estandar de input y output
#include <stdlib.h>  // Librería estándar que incluye funciones para administrar memoria, convertir datos, etc.
#include "ft_list.h"  // Incluimos un archivo de cabecera personalizado

int ft_list_size(t_list *begin_list);  // Declaramos la función ft_list_size. Esta función no está definida en este archivo.

// Aquí definimos la función ft_lstnew que crea un nuevo nodo de la lista
t_list  *ft_lstnew(void *content)  // Recibe un puntero genérico que será el contenido del nuevo nodo
{
    t_list  *node;  // Declaramos un puntero a un nuevo nodo

    // Asignamos memoria para el nuevo nodo y hacemos un cast a (t_list *) ya que malloc retorna un puntero a void
    node = (t_list *)malloc(sizeof(t_list));
    
    // Verificamos si la asignación de memoria tuvo éxito
    if (!node)
        return (NULL);  // Si no fue exitoso, retornamos NULL
    
    node->data = content;  // Asignamos el contenido al nodo
    node->next = NULL;  // Inicializamos el siguiente nodo como NULL
    return (node);  // Retornamos el nuevo nodo
}

// Aquí definimos la función ft_lstadd_front que agrega un nodo al inicio de la lista
void    ft_lstadd_front(t_list **lst, t_list *new)  // Recibe un puntero a la lista y un nodo para agregar
{
    new->next = *lst;  // El siguiente nodo después del nuevo será la cabeza de la lista actual
    *lst = new;  // La nueva cabeza de la lista es el nodo que acabamos de agregar
}

// Aquí empieza la función principal del programa
int     main(void)
{
    t_list  **new_list;  // Declaramos un puntero a la lista
    t_list  *node;  // Declaramos un puntero para los nuevos nodos que vamos a crear

    // Creamos un nuevo nodo con el contenido (void *)1 y lo asignamos a la lista
    *new_list = ft_lstnew((void *)1);  
    node = ft_lstnew((void *)2);  // Creamos otro nodo con el contenido (void *)2
    ft_lstadd_front(new_list, node);  // Agregamos este nodo al inicio de la lista
    
    node = ft_lstnew((void *)3);  // Repetimos el proceso para el contenido (void *)3
    ft_lstadd_front(new_list, node);
    
    node = ft_lstnew((void *)4);  // Y nuevamente para el contenido (void *)4
    ft_lstadd_front(new_list, node);
    
    // Imprimimos el tamaño de la lista utilizando la función ft_list_size
    printf("Tamaño de la lista: %d\n", ft_list_size(*new_list));
    
    return (0);  // La función main retorna 0, indicando que el programa terminó con éxito
}

