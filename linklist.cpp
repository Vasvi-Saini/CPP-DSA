#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
}*newnode,*temp,*head=NULL;


void insert_at_beg();
void insert_at_pos();
void insert_at_end();
void display();

void insert_at_beg(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter an element: \n");
    scanf("%d",&newnode->data);
    if(head==NULL){
        newnode->next=NULL;
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    printf("Inserted at beg\n");
    return;
}
void display(){
    printf("The elements are: \n");
   temp = head;
   while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("NULL\n");
   return;
}
void insert_at_end(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter an element: \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head = newnode;
        temp = newnode;
    }
  else{
    temp=head;
    while(temp->next!=NULL){
    temp=temp->next;
    }
    temp->next=newnode;
  }  
  printf("inserted at end successfully!..\n");
}
int main(){
    insert_at_beg();
    insert_at_beg();
    display();
    insert_at_end();
    display();
    return 0;
}


