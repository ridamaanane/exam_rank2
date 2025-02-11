#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
	struct s_list *next;
	void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	if (begin_list == 0)
		return (0);
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return i;
}

int main()
{
	t_list *head = malloc(sizeof(t_list));
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));

	head->next = NULL;
	n1->next = NULL;
	n2->next = NULL;

	head->next = n1;
	n1->next = n2;
	n2->next = NULL;

	int len = ft_list_size(head);
	printf("%d", len);
}
