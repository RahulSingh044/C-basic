#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printingList(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *DeleteAtBeg(struct Node *head)
{
    struct Node *p = head;
    struct Node *ptr = head;
    while (p->next != head)
    {
        p = p->next;
    }
    head = head->next;
    p->next = head;
    free(ptr);
    return head;
}

struct Node *DeleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != head)
    {
        q = q->next;
        p = p->next;
    }
    p->next = head;
    free(q);
    return head;
}

struct Node *deleteNodeWithKey(struct Node *head, int key)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != key && q->next != head)
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

    // Allocation of memory for nodes in linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Linking of nodes
    head->data = 8;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 61;
    third->next = head;

    printingList(head);
    // head = DeleteAtBeg(head);
    // printf("\n");
    // printingList(head);
    // DeleteAtEnd(head);
    // printf("\n");
    // printingList(head);
    deleteNodeWithKey(head,11);
    printf("\n");
    printingList(head);

    return 0;
}
