// WAP to insert an element at the beginning of the linked list.

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void printLL(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp -> next;
    }
}

struct Node* insertAtBeginning(int element, struct Node* head){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    if(head == NULL){
        temp -> data = element;
        temp -> next = NULL;
        return temp;
    }
    else{
        temp -> data = element;
        temp -> next = head;
        return temp;
    }
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head = (struct Node*) malloc (sizeof(struct Node));
    second = (struct Node*) malloc (sizeof(struct Node));
    third = (struct Node*) malloc (sizeof(struct Node));
    fourth = (struct Node*) malloc (sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 13;
    fourth->next = NULL;
    int element;
    printf("Enter the element to be inserted at the beginning \n");
    scanf("%d", &element);
    printf("Before insertion : \n");
    printLL(head);
    printf("\n");
    head = insertAtBeginning(element, head);
    printf("After insertion : \n");
    printLL(head);
}


