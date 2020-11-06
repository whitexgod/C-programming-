#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *temp, *newnode, *ptr;
int count = 0;

void disp_menu();
void create_node();
void insert_at_front();
void insert_at_pos();
void insert_at_rear();
void del_front();
void del_at_pos();
void del_rear();
void display();

void main()
{
    int choice;
    head = NULL;

    while (choice != 99)
    {
        disp_menu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create_node();
            printf("\n New Node created successfully.\n");
            free(newnode);
            break;

        case 2:
            insert_at_front();
            break;

        case 3:
            insert_at_pos();
            break;

        case 4:
            insert_at_rear();
            break;

        case 5:
            del_front();
            break;

        case 6:
            del_at_pos();
            break;

        case 7:
            del_rear();
            break;

        case 8:
            display();
            break;

        case 9:
            printf("\n Total number of Nodes = %d\n", count);

        case 99:
            printf("\n\nProgram is terminated !!\n\n");
            break;

        default:
            printf("\n Wrong Choice !!\n");
            break;
        }
    }
}

void disp_menu()
{
    printf("\n Circular Linked List \n");
    printf("1. Create a Node.\n");
    printf("2. Insert at front.\n");
    printf("3. Insert at intermediate.\n");
    printf("4. Insert at rear.\n");
    printf("5. Delete at front.\n");
    printf("6. Delete at intermediate.\n");
    printf("7. Delete at rear.\n");
    printf("8. Display.\n");
    printf("9. Print total number of Nodes.\n");
    printf("99. Exit.\n");
    printf("\n\n Enter your choice : ");
}

void create_node()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the value : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
}

void insert_at_front()
{
    create_node();

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        newnode->next = head;
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        head = newnode;
    }
    count++;
}

void insert_at_pos()
{
    int pos = 0;
    printf("Enter the position to insert : ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        insert_at_front();
    }
    else if (pos == count + 1)
    {
        insert_at_rear();
    }
    else if ((pos > 1) && (pos <= count))
    {
        temp = head;
        for (int i = 2; i < pos; i++)
        {
            temp = temp->next;
        }
        create_node();
        newnode->next = temp->next;
        temp->next = newnode;
        count++;
    }
    else
    {
        printf("\n Invalid postion entered. \n");
    }
}

void insert_at_rear()
{
    if (head == NULL)
    {
        insert_at_front();
        return;
    }
    else
    {
        create_node();
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
        count++;
    }
}

void del_front()
{
    if (head == NULL)
    {
        printf("\nThe Linked list is empty. \n");
        return;
    }
    else
    {
        if (head->next == head)
        {
            printf("\n %d is successfully deleted.\n", head->data);
            free(head);
            head = NULL;
            count--;
        }
        else
        {
            temp = head;
            head = temp->next;
            ptr = head;
            while (ptr->next != temp)
            {
                ptr = ptr->next;
            }
            ptr->next = head;
            printf("\n %d is successfully deleted.\n", temp->data);
            free(temp);
            count--;
        }
    }
}

void del_at_pos()
{
    int pos = 0;
    if (head == NULL)
    {
        printf("\nThe Linked list is empty. \n");
        return;
    }
    printf("Enter the position to delete : ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        del_front();
    }
    else if (pos == count)
    {
        del_rear();
    }
    else if ((pos > 1) && (pos < count))
    {
        temp = head;
        for (int i = 2; i < pos; i++)
        {
            temp = temp->next;
        }
        ptr = temp->next;
        temp->next = ptr->next;
        printf("\n %d is successfully deleted.\n", ptr->data);
        free(ptr);
        count--;
    }
    else
    {
        printf("\n Invalid postion entered. \n");
    }
}

void del_rear()
{
    if ((head == NULL) || (head->next == head))
    {
        del_front();
    }
    else
    {
        temp = head;
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        ptr = temp->next;
        temp->next = head;
        printf("\n %d is successfully deleted.\n", ptr->data);
        free(ptr);
        count--;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("\nThe linked list is empty.\n");
        return;
    }
    else
    {
        temp = head;
        printf("\n\n");
        while (temp->next != head)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
        printf("\n\n");
    }
}
