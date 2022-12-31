#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};
int main()
{
 struct node *head=NULL;
 struct node *first=NULL;
 struct node *next=NULL;

 int i,n;
 printf("enter the number of nodes to be created: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  if(head==NULL)
  {
   next=(struct node*)malloc(sizeof(struct node));
   printf("Enter data for first node: ");
   scanf("%d",&next->data);
   next->link=NULL;
   head=next;
  }
  else
  {
   first=(struct node*)malloc(sizeof(struct node));
   printf("Enter data: ");
   scanf("%d",&first->data);
   first->link=NULL;
   next->link=first;
   next=first;
  }
 }
 printf("\noutput: ");
 struct node *temp=head;
 while(temp!=NULL)
 {
  printf("%d ",temp->data);
  temp=temp->link;
 }
 return 0;
}