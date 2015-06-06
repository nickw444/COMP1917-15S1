#include <stdlib.h>
#include <stdio.h>
#include "exam.h"

void printList(list l) {
    node * current = l->head;
    while (current != NULL) {
        printf("[%d] -> ", current->value);
        current = current->next;
    }
    printf("[X]\n");
}

list makeList(int length) {
    list l = malloc(sizeof(list));
    l->head = NULL;

    int i = 0;
    while (i < length) {
        node *n = malloc(sizeof(node));
        n->next = l->head;
        n->value = i;
        l->head = n;
        i++;
    }
    return l;
}

int main(int argc, char *argv[])
{
    list l = makeList(9);
    list frontList = makeList(0);
    list backList = makeList(0);

    printf("sourceList: ");
    printList(l);
    printf("FrontList: ");
    printList(frontList);
    printf("BackList: ");
    printList(backList);

    frontBackSplit(l, frontList, backList);
    printf("After Splitting: \n");
    printf("sourceList: ");
    printList(l);
    printf("FrontList: ");
    printList(frontList);
    printf("BackList: ");
    printList(backList);

    // Yolo, memory leaks.

    l = makeList(10);
    frontList = makeList(0);
    backList = makeList(0);

    printf("sourceList: ");
    printList(l);
    printf("FrontList: ");
    printList(frontList);
    printf("BackList: ");
    printList(backList);

    frontBackSplit(l, frontList, backList);
    printf("After Splitting: \n");
    printf("sourceList: ");
    printList(l);
    printf("FrontList: ");
    printList(frontList);
    printf("BackList: ");
    printList(backList);

    l = makeList(0);
    frontList = makeList(0);
    backList = makeList(0);

    printf("sourceList: ");
    printList(l);
    printf("FrontList: ");
    printList(frontList);
    printf("BackList: ");
    printList(backList);

    frontBackSplit(l, frontList, backList);
    printf("After Splitting: \n");
    printf("sourceList: ");
    printList(l);
    printf("FrontList: ");
    printList(frontList);
    printf("BackList: ");
    printList(backList);

    return EXIT_SUCCESS;
}