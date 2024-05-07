#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// struct Node* head = NULL;

void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

// Time commplexity of this function is O(1)
struct Node *insertAtBeginning(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = value;
    return ptr;
}

// Time commplexity of this function is O(n)
struct Node *inBetweenNodes(struct Node *head, int value, int indx)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != indx - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = value;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Time commplexity of this function is O(n)
struct Node *insertAtEnd(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = value;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Time commplexity of this function is O(1)
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = value;
    ptr -> next = prevNode -> next;
    prevNode -> next = ptr;
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
    // head = insertAtBeginning(head, 45);
    // inBetweenNodes(head, 106, 2);
    // insertAtEnd(head, 492);
    insertAfterNode(head,third,654);
    printf("\n");
    printList(head);
    return 0;
}