#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

void swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int sorted = 0;

    while (!sorted)
    {
        t_list *tmp = lst;
        sorted = 1;
        while (tmp && tmp->next)
        {
            if (!cmp(tmp->data , tmp->next->data))
            {
                swap(&tmp->data , &tmp->next->data);
                sorted = 0;
            }
            tmp = tmp->next;
        }
    }
    return (lst);
}
int ascending(int a, int b)
{
	return (a <= b);
}

void print_list(t_list *head)
{
    while (head)
    {
        printf("[%d] ", head->data);
        head = head->next;
    }
}

int main()
{
    t_list *n1 = malloc(sizeof(t_list));
    n1->next = NULL;
    n1->data = 15;

    t_list *n2 = malloc(sizeof(t_list));
    n2->next = NULL;
    n2->data = 2;

    t_list *n3 = malloc(sizeof(t_list));
    n3->next = NULL;
    n3->data = 20;

    t_list *n4 = malloc(sizeof(t_list));
    n4->next = NULL;
    n4->data = 5;

    t_list *n5 = malloc(sizeof(t_list));
    n5->next = NULL;
    n5->data = 1;

    t_list *n6 = malloc(sizeof(t_list));
    n6->next = NULL;
    n6->data = 6;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = NULL;

    print_list(n1);

    printf("\n");

    sort_list(n1, ascending);

    print_list(n1);

}
