#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deletionAtBeginning(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteNodeInBetween(struct Node *head, int indx)
{
    struct Node *p = head;
    int i = 0;
    while (i != indx - 1)
    {
        p = p->next;
        i++;
    }
    struct Node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

struct Node *deletionAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node *deleteNodeWithKey(struct Node *head, int key)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != key && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == key)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 95;
    third->next = fourth;
    fourth->data = 15;
    fourth->next = NULL;

    printList(head);
    // head = deletionAtBeginning(head);
    // deleteNodeInBetween(head,2);
    // deletionAtEnd(head);
    head = deleteNodeWithKey(head, 20);
    printf("After deletion \n");
    printList(head);
    return 0;
}
