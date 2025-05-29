#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int val;
    int swap = 1;

    while(swap)
    {
        tmp = lst;
        swap = 0;
        while(tmp -> next)
        {
            if(cmp(tmp->data, tmp->next->data) == 0)
            {
                val = tmp->data;
                tmp->data = tmp->next->data;
                tmp->next->data = val;
                swap = 1;
            }
            tmp = tmp->next;
        }
    }
    return(lst);
}