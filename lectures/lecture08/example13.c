#include <stdio.h>
#include <stdlib.h>

typedef struct __lnode {
    int value;
    struct __lnode* next;
} lnode;

lnode* append(lnode* root, int newvalue)
{
    if ( root == NULL ) {
        root = (lnode*)malloc(sizeof(lnode));
        root->value = newvalue;
        root->next = NULL;
    } else {
        lnode* curr = root;
        while ( curr->next != NULL )
            curr = curr->next;
        lnode* newel = (lnode*)malloc(sizeof(lnode));
        newel->value = newvalue;
        newel->next = NULL;
        curr->next = newel;
    }

    return root;
}


int main() {
    lnode* root = NULL;

    root = append(root, 5);
    root = append(root, 1);
    root = append(root, 42);

    for (lnode* curr = root; curr != NULL; curr = curr->next)
        printf("Value: %d\n", curr->value);

    return 0;
}