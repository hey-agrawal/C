#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void print(struct node *ptr)
{
while (ptr!=NULL)
{
printf ("%d ",ptr->data);
ptr=ptr->next;
}
}
struct node * insertionatbeginning(struct node *ptr,int key)
{
struct node *Newnode=(struct node *)malloc(sizeof(struct node));
Newnode->data=key;
Newnode->next=ptr;
ptr=Newnode;
return ptr;
}
int main()
{
int n,i;
printf ("number of nodes:");
scanf ("%d",&n);
struct node *head=(struct node *)malloc(sizeof(struct node));
printf ("\ndata:");
scanf ("%d",&head->data);
head->next=NULL;
struct node *ptr=head;
for (i=1;i<n;i++)
{
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf ("\ndata:");
scanf ("%d",&newnode->data);
newnode->next=NULL;
ptr->next=newnode;
ptr=ptr->next;
}
ptr=head;
int key;
printf ("\ninsert");
scanf ("%d",&key);
head=insertionatbeginning(head,key);
printf ("\nafter insertion:-\n");
print(head);
return 0;
}