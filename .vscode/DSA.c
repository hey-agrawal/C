
/*SET6 LL insertion at begging*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void print(struct node *ptr)
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
struct node *ptr=head;
for (i=0;i<n;i++)
{
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf ("\ndata:");
scanf ("%d",newnode->data);
newnode->next=NULL;
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
