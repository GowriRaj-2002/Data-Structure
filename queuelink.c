#include<stdio.h>
#include<stdlib.h>
struct Node{
        int data;
        struct Node*link;
           };
 struct Node* start=NULL;
 struct Node* getnode()
 {
  int item;
  printf("enter the value to insert:");
  scanf("%d",&item);
  struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
  if(new_node==NULL)
  {
  printf("memory allocation failed.");
  exit(1); 
  new_node->data=item;
  new_node->link=NULL;
  return new_node;
 }
 }
 
 void insertAtHead()
 {
  struct Node* new_node=getnode();
  if(start==NULL)
  {
   start=new_node;
   }
   else
   {
    new_node->link=start;
    start=new_node;
   }
   }
   
 void deleteAtHead()
 {
 if(start==NULL)
 {
  printf("stack is empty,nothing to delete:\n");
  }
  else
  {
   struct Node*ptr=start;
   start=start->link;
   free(ptr);
  printf("DEleted successfully.\n");
   }
   }
   
 
     void main()
     {
       int ch;
       while(1)
       {
        printf("\n---stack menu---\n");
        printf("1.insert At Head\n");
        printf("2.Delete At Head\n");
        printf("3.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        
        switch(ch)
        {
        case 1:
               insertAtHead();
               printf("Node inserted\n");
               break;
        case 2:
               deleteAtHead();
               break;
        case 3:
             exit(0);             
         default:
          printf("invalid choice!\n");
          }
          }
          }                                    
