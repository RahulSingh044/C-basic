#include<stdio.h>
#include<stdlib.h>

struct Node{
int val;
struct Node* next;
};

struct Node* Head = NULL;

//Delete a node from Beginning of Linked list
void DeleteAtBeginning()
{
    if (Head == NULL)
    {
        return;
    }
    if (Head->next == NULL)
    {
        free(Head);
        Head = NULL;
        return;
    }
    struct Node *cur = Head->next;
    free(Head);
    Head = cur;
}

//Delete a node from end of the linked list
void DeleteAtEnd()
{
    if (Head == NULL)
    {
        return;
    }
    if (Head->next == NULL)
    {
        free(Head);
        Head = NULL;
        return;
    }
    struct Node *cur = Head;
    struct Node *prev = NULL;
    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }

    prev->next = NULL;
    free(cur);
}

//Delete node after a specific node
void DeleteAfterNode(struct Node *pnode)
{
    if (pnode == NULL || pnode->next == NULL)
    {
        return;
    }
    struct Node *cur = pnode->next;
    pnode->next = cur->next;
    free(cur);
}

//Delete node before a specific node
void DeleteBeforeNode(struct Node *pnode)
{
    if (pnode == NULL || pnode == Head)
    {
        return;
    }
    if (pnode == Head->next)
    {
        struct Node *cur = Head;
        Head = Head->next;
        free(cur);
        return;
    }
    struct Node *cur = Head;
    struct Node *prev = NULL;
    while (cur->next != pnode)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = pnode;
    free(cur);
}

//Delte a specific node
void DeleteNode(struct Node *pnode)
{
    if (pnode == NULL)
    {
        return;
    }

    if (pnode == Head)
    {
        struct Node *cur = Head;
        Head = Head->next;
        free(cur);
        return;
    }
    struct Node *cur = Head;
    while (cur->next != pnode)
    {
        cur = cur->next;
    }
    cur->next = pnode->next;
    free(pnode);
}

// Delte node from a specific position 
void DeleteAtPosition(int pos)
{
    if (Head == NULL)
    {
        return;
    }
    struct Node *cur = Head;
    if (pos == 0)
    {
        Head = Head->next;
        free(cur);
        return;
    }
    int cnt = 1;
    while (cnt < pos)
    {
        cur = cur->next;
    }
    struct Node *prev = cur->next;
    cur->next = prev->next;
    free(prev);
}

// Delete a node containing a specific value
void Delete(int data)
{
    if (Head == NULL)
    {
        return;
    }

    struct Node *temp = Head;
    struct Node *prev = NULL;
    if (temp != NULL && temp->val == data)
    {
        Head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->val != data)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }
    prev->next = temp->next;
    free(temp);
}

//Printing  Node
void PrintList()
{
    struct Node *cur = Head;
    while (cur != NULL)
    {
        printf("%d ", cur->val);
        cur = cur->next;
    }
    printf("\n");
}

int main()
{
    DeleteAtBeginning();
    DeleteAfterNode(Head);
    DeleteBeforeNode(Head->next);
    DeleteNode(Head);
    DeleteAtPosition(1);
    DeleteAtEnd();
    Delete(7);
    PrintList();
}
