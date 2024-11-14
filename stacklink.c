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
 
  void push()
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
   printf("%d is pushed\n",new_node->data);
   }
   
   
 int pop()
 {
 if(start==NULL)
 {
  printf("stack is empty,nothing to delete:\n");
  return 0;
  }
  else
  {
   struct Node*ptr=start;
   start=start->link;
   free(ptr);
   return 1;
   }
   }
   
   void traverse()
   {
   if(start==NULL)
   {
    printf("stack empty.\n");
    }
    else
    {
     printf("stack elements are:");
     struct Node*ptr=start;
       while(ptr!=NULL)
        {
        printf("->%d",ptr->data);
        ptr=ptr->link;
        }
      }
     }
     void freeList()
     {
       while(start!=NULL)
       {
       pop();
       }
       }
       
       
       int main()
       {
       int choice;
       while(1)
       {
        printf("\n---stack menu---\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.traverse\n");
           printf("4.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        
        switch(choice)
        {
        case 1:
               push();
               printf("Node inserted\n");
               break;
        case 2:
               pop();
               break;
        case 3:
               traverse();
               break;             
         default:
          printf("invalid choice!\n");
          }
          }
          return 0;
          }                                    
