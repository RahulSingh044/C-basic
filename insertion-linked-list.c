#include<stdlib.h>
struct node{
  int val;
  struct node*next;
};

struct node* head=NULL;
//Insertion of Node at the HEAD of linked List
void insertatbeginning(int data){
  struct node*ptr=(struct node*)malloc(sizeof(struct node));
  ptr->val=data;
  ptr->next=NULL;
  if(head==NULL){
    head=ptr;
    return;
  }
  ptr->next=head;
  head=ptr;
}

//Insertion of Node at the End of the linked list
void insertionatend(int data){
  struct node*curr=head;
  struct node*ptr=(struct node*)malloc (sizeof(struct node));
  ptr->val=data;
  ptr->next=NULL;
  if(head==NULL){
    head=ptr;
    return;
  }
  if(head->next==NULL){
    head->next=ptr;
    return;
  }
  while(curr->next!=NULL){
    curr=curr->next;
  }
  curr->next=ptr;
}

//Insertion after any Node in the linked list
void insertafternode(struct node*pnode,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->val=data;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
        return ;
    }
    ptr->next=pnode->next;
    pnode->next=ptr;
}

//Insertion before any Node in the linked list
void insertbeforenode(struct node*pnode,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->val=data;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
        return ;
    }
    if(head==pnode){
        ptr->next=head;
        head=ptr;
        return ;
    }
    struct node*cur=head;
    while(cur->next!=pnode){
        cur=cur->next;
    }
    ptr->next=cur->next;
    cur->next=ptr;
}

//Insertion of Node at any particular position in the linked list
void insertatposition(int pos,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->val=data;
    ptr->next=NULL;
    if(pos==0){
        ptr->next=head;
        head=ptr;
        return;
    }
    struct node *curr=head;
    int count=1;
    while(count<pos){
        curr=curr->next;
        count++;
    }
    ptr->next=curr->next;
    curr->next=ptr;
}

//Search for a specific Node in the linked list
void searchnode(int key){
    struct node*cur=head;
    while(cur!=NULL){
        if(cur->val==key){
            printf("data found");
            return;
        }
        cur=cur->next;
    }
    printf("data not found");
}

//return the value of a specific Node of the Linked list
struct node*returnnode(int key){
    struct node*cur=head;
    while(cur!=NULL){
        if(cur->val==key){
            return cur;
        }
        cur=cur->next;
    }
    return NULL;
}

//Printing the Linked list
void printlist(){
    struct node*cur=head;
    while(cur!=NULL){
        printf("%d ",cur->val);
        cur=cur->next;
    }
}

//Driver code
int main(){
    insertatbeginning(3);
    insertionatend(7);
    insertafternode(head,6);
    insertbeforenode(head,5);
    insertatposition(2,8);
    printlist();
    searchnode(9);
    struct node*cur=returnnode(5);
}
