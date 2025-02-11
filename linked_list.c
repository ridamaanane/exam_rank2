#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str)
{
    if (!head || !str)
        return (NULL);
    list_t *new_node;
    new_node = malloc(sizeof(list_t));
    if(!new_node)
        return (NULL);
    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = *head;

    *head = new_node;
    return (new_node);
}
void print_node(list_t *head)
{
    if (head == NULL) {  // protection
        printf("List is empty!\n");
        return;
    }
    while(head)
    {
        printf("[%d] (%s)\n", head->len ,head->str);
        head = head->next;
    }
}
int main()
{
    list_t *head = NULL;
    list_t *new_node = add_node(&head, "jdid");
    print_node(head);
}
