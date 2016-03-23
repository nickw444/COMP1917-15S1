typedef struct _node *link;
typedef struct _node {
    int value;
    link next;
} node;

typedef struct _list {
    link head;
} *list;

int numItems (list l);
void frontBackSplit(list sourceList, list frontList, list backList);