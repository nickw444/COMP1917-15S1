#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int value; // Store our value.
    node * next; // Store a link to the next node
} _node;

void printNodes(node * n);

int main(int argc, char const *argv[])
{

    node * head = (node *)malloc(sizeof(node));
    // Point next to null since it is the only node.
    head->next = NULL;

    // Set the value of the first node.
    head->value = 33;
    // Same as:
    (*head).value = 33;


    // Add a new node.
    node * newNode = (node *)malloc(sizeof(node));
    // Set its value:
    newNode->next = NULL;
    newNode->value = 42;

    // Add it to the linked list.
    head->next = newNode;
    // [33] -> [42] -> X

    // Print from the start. [33] -> [42] -> X
    printNodes(head);
    // Print from new Node: [42] -> X
    printNodes(newNode);

    return 0;
}


void printNodes(node * n) {
    node * curr = n;
    while (curr != NULL) {
        // While the current node is not pointing at null.
        printf("[%d] -> ", curr->value);
        curr = curr->next;
    }

    printf("X\n");
}