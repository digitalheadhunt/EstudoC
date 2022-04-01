#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node{
    int x;
    struct Node* next;
}Node;

int main(){

    Node root;
    root.x = 13;
    root.next = malloc(sizeof(Node));
    root.next->x = -2;
    root.next->next = malloc(sizeof(Node));
    root.next->next->x = 15;
    root.next->next->next = NULL;

    printf("Root %d\n", root.x);
    printf("Ele2 %d\n", root.next->x);
    printf("El3 %d \n", root.next->next->x);

    return 0;
}