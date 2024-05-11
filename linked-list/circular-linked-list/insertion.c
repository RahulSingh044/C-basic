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
    }while (ptr != head);
}

struct Node *insertAtBeg(struct Node *head, int val)
{
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;
    struct Node* p = head;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return ptr;
}

struct Node *insertAtEnd(struct Node *head, int val)
{
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;
    struct Node* p = head;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return ptr;
}

//Linear search in Circular Node
void searchNode(struct Node *head, int val)
{
  struct Node* ptr = head;
  int  i = 0;
  do
  {
    if(ptr->data == val)
    {
        printf("%d is found at %d-Node",val,i);
        return;
    }
    ptr = ptr->next;
    i++;
  }while(ptr->next != head);
  printf("Data is not Found");
}

struct Node *inBetweenNodes (struct Node *head, int val, int indx)
{
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = val;
    struct Node* p = head;
    int i = 0;
    // Traverse to the node at index (indx - 1)
    while (i != indx - 1 && p->next != head) {
        p = p->next;
        i++;
    }
    // Check if the given index is out of bounds
    if (i != indx - 1) {
        printf("Index out of bounds\n");
        free(ptr);
        return head; 
    }
    struct Node *q = p->next;
    p->next = ptr;
    ptr->next = q;
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
    head = insertAtBeg(head, 64);
    printf("\n");
    printingList(head);
    insertAtEnd(head, 88);
    printf("\n");
    printingList(head);
    searchNode(head, 61);
    inBetweenNodes(head,96,3);
    printf("\n");
    printingList(head);

    return 0;
}