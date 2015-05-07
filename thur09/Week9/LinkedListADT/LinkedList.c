#include "LinkedList.h"
#include <stdlib.h>

typedef struct node {
    int value;
    struct node * next;
} node;

typedef struct _linkedList {
    node * head;
    int num_nodes;
} linkedList;


LinkedList newLinkedList(void) {
    LinkedList list = (LinkedList)malloc(sizeof(linkedList));
    list->head = NULL;
    list->num_nodes = 0;
    return list;
}
void addNode(LinkedList l, int newValue) {
    l->num_nodes += 1;
    node * n = malloc(sizeof(node));
    n->next = l->head;
    l->head = n;
}
int getNumNodes(LinkedList l) {
    return l->num_nodes;
    // node * curr = l->head;
    // int count = 0;
    // while (curr != NULL) {
    //     count ++;
    //     curr = curr->next;
    // }
    // return count;
}

