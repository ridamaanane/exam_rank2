#include <stdlib.h>
#include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

int	cmp(char *s1, char *s2)
{
	if (s1[0] == s2[0])
		return (0);
	return (1);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	if (!begin_list || !*begin_list) 
		return ;
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
		ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
}
void print_list(t_list *head)
{
	while (head)
	{
		printf("[%s]->", (char*)head->data);
		head = head->next;
	}
	printf("\n");
}


int main()
{
	t_list *n1 = malloc(sizeof(t_list));
    t_list *n2 = malloc(sizeof(t_list));
    t_list *n3 = malloc(sizeof(t_list));
    t_list *n4 = malloc(sizeof(t_list));
    t_list *n5 = malloc(sizeof(t_list));
    t_list *n6 = malloc(sizeof(t_list));
    t_list *n7 = malloc(sizeof(t_list));
    t_list *n8 = malloc(sizeof(t_list));
    t_list *n9 = malloc(sizeof(t_list));
    t_list *n10 = malloc(sizeof(t_list));

	n1->data = "";
    n2->data = "rida";
    n3->data = "rida";
    n4->data = "rida";
    n5->data = "rida";
    n6->data = "rida";
    n7->data = "rida0";
    n8->data = "rida";
    n9->data = "rida";
    n10->data =  "sida";

	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = n8;
	n8->next = n9;
	n9->next = n10;
	n10->next = NULL;


	print_list(n1);


	ft_list_remove_if(NULL, "", cmp);


	print_list(n1);
}
