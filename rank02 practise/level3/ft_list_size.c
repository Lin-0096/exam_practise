#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int size = 0;
    t_list *ptr = begin_list;

    while(ptr)
    {
        size++;
        ptr = ptr->next;
    }
    return(size);
}