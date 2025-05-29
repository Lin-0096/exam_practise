#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *cur;
    t_list *tmp;

    while(*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        cur = *begin_list;
        *begin_list = cur->next;
        free(cur);
    }
    cur = *begin_list;
    while(cur && cur->next)
    {
        if(cmp(cur->next->data, data_ref) == 0)
        {
            tmp = cur->next;
            cur->next = tmp->next;
            free(tmp);
        }
        else
            cur = cur->next;
    }
}
