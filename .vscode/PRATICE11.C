#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
int Traversal(struct node * ptr){
    printf("Linked List is: ");
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node * InsertAtFirst(struct node * head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
int main(){
    int size;
    struct node * head = NULL;
    struct node * m = NULL;
    struct node * n = NULL;
    printf("Size of Nodes you want to create: ");
    scanf("%d",&size);
    for(int i = 1;i <= size;i++){
        if(head == NULL){
            m = (struct node *)malloc(sizeof(struct node));
            printf("Enter data for %d node: ",i);
            scanf("%d",&m->data);
            m->next = NULL;
            head = m;
        }
        else{
            n = (struct node *)malloc(sizeof(struct node));
            printf("Enter data for %d node: ",i);
            scanf("%d",&n->data);
            n->next = NULL;
            m->next = n;
            m = n;
        }
    }
    printf("Before Insertion# \n");
    Traversal(head);
    printf("After Insertion# \n");
    head = InsertAtFirst(head,20);
    Traversal(head);
    return 0;
}