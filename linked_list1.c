#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};


int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
    
    struct node *current = malloc(sizeof(struct node));
    current -> data = 67;
    current -> link = NULL;
    head -> link = current;
    
    current = malloc(sizeof(struct node));
    current ->data = 45;
    current -> link = NULL;
    head -> link-> link = current;
    
    current = malloc(sizeof(struct node));
    current ->data = 56;
    current -> link = NULL;
    head -> link-> link-> link = current;
    
    current = malloc(sizeof(struct node));
    current ->data = 43;
    current -> link = NULL;
    head -> link-> link-> link-> link = current;
    
    
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    
    
    return 0;
}
