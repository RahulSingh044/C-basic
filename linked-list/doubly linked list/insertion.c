#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void printingList(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insetionAtBeg(struct Node *Head, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->prev = NULL;
    ptr->data = val;
    ptr->next = Head;
    Head->prev = ptr;
    return ptr;
}

struct Node *insetionAtEnd(struct Node *Head, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = Head;
    ptr->data = val;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
    ptr->next = NULL;
    return Head;
}

struct Node *inBetweenNodes(struct Node *head, int val, int indx)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return head;
    }
    ptr->data = val;
    struct Node* p = head;
    int i = 0;

    while (i != indx - 1 && p != NULL) {
        p = p->next;
        i++;
    }

    if (p == NULL) {
        printf("Index out of bounds.\n");
        free(ptr);
        return head;
    }

    struct Node* q = p->next;
    p->next = ptr;
    ptr->prev = p;
    ptr->next = q;
    if (q != NULL) {
        q->prev = ptr;
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
    head->prev = NULL;
    head->next = second;

    second->data = 11;
    second->prev = head;
    second->next = third;

    third->data = 61;
    third->prev = second;
    third->next = NULL;

    printingList(head);
    head = insetionAtBeg(head,96);
    printf("\n");
    printingList(head);
    insetionAtEnd(head,88);
    printf("\n");
    printingList(head);
    inBetweenNodes(head,457,2);
    printf("\n");
    printingList(head);

    return 0;
}