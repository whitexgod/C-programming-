#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
} * first, *second, *head, *tail, *temp, *newnode;

void display_linked_list(struct node *ptr);
void append(struct node *ptr);
struct node *take_nodes(int num);

void main()
{
    int lim;

    printf("\nEnter the number of nodes for first linked list -> ");
    scanf("%d", &lim);
    first = take_nodes(lim);

    printf("\nEnter the number of nodes for second linked list -> ");
    scanf("%d", &lim);
    second = take_nodes(lim);

    head = tail = NULL;

    if ((first == NULL) || (second == NULL))
    {
        if (first == NULL)
        {
            append(second);
        }
        if (second == NULL)
        {
            append(first);
        }
    }
    else
    {
        if (first->data < second->data)
        {
            head = first;
            first = first->next;
        }
        else
        {
            head = second;
            second = second->next;
        }

        tail = head;

        while (first != NULL && second != NULL)
        {
            if (first->data < second->data)
            {
                tail->next = first;
                tail = tail->next;
                first = first->next;
            }
            else if (first->data > second->data)
            {
                tail->next = second;
                tail = tail->next;
                second = second->next;
            }
            else
            {
                tail->next = first;
                tail = tail->next;
                first = first->next;
                second = second->next;
            }
        }
        if (first == NULL)
        {
            tail->next = second;
        }
        else
        {
            tail->next = first;
        }
    }

    printf("\n - : Merged sorted Linked list : - ");
    display_linked_list(head);
}

void display_linked_list(struct node *ptr)
{
    if (ptr == NULL)
    {
        printf("\nThe linked list is empty !!\n");
        return;
    }
    else
    {
        temp = ptr;
        printf("\n\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n\n");
    }
}

void append(struct node *ptr)
{
    temp = head = ptr;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    tail = temp;
}

struct node *take_nodes(int num)
{
    struct node *ptr = NULL;
    for (int i = 1; i <= num; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Node %d > ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (ptr == NULL)
        {
            ptr = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return ptr;
}