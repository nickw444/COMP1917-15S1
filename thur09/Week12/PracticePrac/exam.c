#include "exam.h"
#include <stdlib.h>
#include <stdio.h>
// Don't Malloc
// Don't change the value of any node. only change links
// Don't delete any nodes or call free()

// if sourceList is 1->4->6->4->3->X then
// After execution:
//      frontList should be 1->4->6->X 
//      backList should be 4->3->X
//      sourceList should be X

// If sourceList is 3->10->15->25->X
// After execution:
//      frontList should be 3->10->X
//      backList should be 15->25->X
//      sourceList should be X

int numItems (list l) {
    int length = 0;
    link current = l->head;
    while (current != NULL) {
        length ++;
        current = current->next;
    }
    return length;
}


/*******
An optimized solution.
*******/
void frontBackSplit(list sourceList, list frontList, list backList) {
    int length = numItems(sourceList);
    if (length > 0) {
        int n = length;
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = n /2 + 1;
        }

        // Move the start of sourceList to frontList. We will then
        // detatch backList upon iterating.
        int i = 0;

        frontList->head = sourceList->head;
        sourceList->head = NULL;
        link curr = frontList->head;
        while (i < n - 1) {
            curr = curr->next;
            i ++;
        }

        // curr is now the node we need to detach.
        backList->head = curr->next;
        curr->next = NULL;
    }
}


/**********
A not so good solution.
(Still works though)
**********/

void appendToEnd(list l, node * n) {
    link current = l->head;
    link prev = NULL;
    while (current != NULL) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
        // No elements existed. 
        l->head = n;
    }
    else {
        // Element existed. The last element is prev.
        prev->next = n;
    }
}

void frontBackSplitPoorSolution(list sourceList, list frontList, list backList) {
    // Put your code in here
    int length = numItems(sourceList);
    int n = length;
    if (n % 2 == 0) {
        // Even List. Split Half Way
        n = n / 2;
    }
    else {
        // Odd list. We want to add the middle element to the frontList.
        n = n / 2 + 1;
    }

    // Loop through every node splitting were required.
    link current = sourceList->head;
    int i = 0;
    while (current != NULL) {
        link next = current->next;
        current->next = NULL;
        if (i < n) {
            // Add to frontList since we are before the split
            appendToEnd(frontList, current);
        }
        else {
            // After the split.
            appendToEnd(backList, current);
        }
        i++;
        current = next;
    }
    sourceList->head = NULL;
}