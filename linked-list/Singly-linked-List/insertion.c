#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void printlist(struct Node *ptr){
  while (ptr != NULL)
  {
    printf("%d\t",ptr->data);
    ptr = ptr->next;
  }
}

struct Node *insertAtBeg(struct Node *head, int value) {
  struct Node *ptr  = (struct Node*)malloc(sizeof(struct Node));
  ptr -> data = value;
  ptr->next = head;
  return ptr;
}

struct Node *insertAtEnd(struct Node *head, int value) {
  struct Node *curr = head;
  struct Node *ptr  = (struct Node*)malloc(sizeof(struct Node));
  ptr->data = value;
  while (curr -> next != NULL)
  {
    curr = curr->next;
  }
  curr->next = ptr;
  ptr->next = NULL;
  return head;
}

struct Node *insertAfterNode(struct Node *head, int value, struct Node *Pnode) {
  struct Node *ptr  = (struct Node*)malloc(sizeof(struct Node));
  ptr->data = value;
  ptr->next = Pnode->next ;
  Pnode->next = ptr; 
  return head;
}

struct Node *insertBeforeNode(struct Node *head, int value, struct Node *Pnode) {
  struct Node *curr = head;
  struct Node *ptr  = (struct Node*)malloc(sizeof(struct Node));
  ptr->data = value;
  while (curr -> next != Pnode)
  {
    curr = curr->next;
  }
  
  curr->next = ptr;
  ptr->next = Pnode;
  return head;
}

struct Node *insertAtParticularPosition(struct Node *head, int value, int pos) {
  struct Node *curr = head;
  struct Node *ptr  = (struct Node*)malloc(sizeof(struct Node));
  ptr->data = value;
  int i = 0;
  while (i != pos)
  {
    curr = curr->next;
    i++;
  }
  ptr ->next = curr->next;
  curr->next = ptr;
  return head;
}

void *SearchNode(struct Node *head, int value) {
  struct Node *curr = head;
  int i = 0;
  while (curr != NULL )
  {
    curr = curr->next;
    i++;
    if(curr->data == value){
      printf("%d is found at index: %d",value,i);
    }
  }
  printf("The data is not found");
} 

int main() {
  struct Node *head;
  struct Node *first;
  struct Node *second;


  head = (struct Node*)malloc(sizeof(struct Node));
  first = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  
  head->data = 7;
  head->next = first;
  first->data = 9;
  first->next = second;
  second->data = 2;
  second->next = NULL;

 printlist(head);
//  head = insertAtBeg(head,96);
// insertAtEnd(head,36);
// insertAfterNode(head,75,first);
// insertBeforeNode(head,88,second);
// insertAtParticularPosition(head,55,2);
// SearchNode(head,9);
//  printf("\n");
//  printlist(head);
}
