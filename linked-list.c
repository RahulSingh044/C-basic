#include<stdlib.h>
struct node{
  int val;
  struct node*next;
};

struct node* head=NULL;
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
void printlist(){
    struct node*cur=head;
    while(cur!=NULL){
        printf("%d ",cur->val);
        cur=cur->next;
    }
}

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

Add class comment…


Post by Pranshu Kumar
Pranshu Kumar
Created 4:17 PM4:17 PM
part 3

void insertionatspecific(int pos,int data){
  struct node*ptr=(struct node*)malloc(sizeof(struct node));
  ptr->val=data;
  ptr->next=NULL;
  if(pos==0){
    ptr->next=head;
    head=ptr;
    return;
  }
  struct node*curr=head;
  int count=1;
  while(count<pos){
    curr=curr->next;
    count++;
  }
  ptr->next=curr->next;
  curr->next=ptr;
}

void searchanode(int key){
  struct node*curr=head;
  while(curr!=NULL){
    if(curr->val==key){
      printf("data found");
      return;
    }
    curr=curr->next;
  }
  printf("data not found");
}
int main(){
  return 0;
}
