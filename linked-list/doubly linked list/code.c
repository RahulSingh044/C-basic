#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void traverseList(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *current = head;
    printf("Traversal in forwrard\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    //move the current pointer to the last node
    while (current->next != NULL)
    {
        current = current->next;
    }
    printf("Traversal in reverse:\n");
    while (current != NULL)
    {
        printf("Element: %d\n", current->data);
        current = current->prev;
    }
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

    traverseList(head);

    return 0;
}