#include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;


void	ft_swap(int *a, int *b)
{
	int	tmp = *a;
	*a = *b;
	*b = tmp;
}
t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    if (!lst)
        return (NULL);

    t_list *tmp;

    tmp = lst;
    while (lst && lst->next)
    {
        if (!cmp(lst->data, lst->next->data))
        {
            ft_swap(&lst->data, &lst->next->data);
            lst = tmp; // Restart from the head
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}