#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void LLTraversal(struct Node * ptr){
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
struct Node * insertAtFirst(struct Node * head ,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data  = data;

    ptr->next = head;
    return ptr;
}


int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printf("Linked list before insertion: ");
    LLTraversal(head);
    head = insertAtFirst(head ,0);
    printf("\nLinked list after insertion: ");
    LLTraversal(head);

    return 0;
}