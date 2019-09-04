#include<stdio.h>
#include<stdlib.h>

struct node 
{
 int data;
 struct node *next;
 };
 struct node *data = NULL;
 
 typedef struct node Node;
 Node *head = NULL;	
 Node *tail = NULL;
 
 void creation()
 {
  Node *new=(Node*)malloc(sizeof(Node));
  int value;
  printf("enter value");
  scanf("%d",&value);
  
  if(head==NULL)
   { 
    new->data=value;
    new->next=new;
    head=new;
    tail=new;
   }
   
   else
   {
    tail->next=new;
    tail=new;
    tail->next=head;
   }
  } 
   
  void print()
  {
   Node *t=head;
   
   do
   {
   printf("%d-->",t->data);
   t=t->next;
   }
   while(t!=head);
   
    printf("\n");
   }
  
 void main()
 {
    creation();
     print(); 
 }

