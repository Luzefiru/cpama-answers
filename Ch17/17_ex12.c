#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL;

void insertHead(int n); // helper function to insert elements
void prettyPrint(void); // helper function to pretty print
struct node *find_last(struct node *list, int n); // actual function to implement

int main(void) // test program
{
    insertHead(3);
    insertHead(2);
    insertHead(1);
    insertHead(3);
    insertHead(10);
    insertHead(3);
    prettyPrint();

    int target = 10; // returns the pointer to the node last node with {target}
    printf("%p\n", find_last(first, target));

    target = 666; // returns NULL
    printf("%p\n", find_last(first, target));
}

struct node *find_last(struct node *list, int n)
{
    struct node *last = NULL;

    while (list)
    {
        if (list->data == n)
            last = list;

        list = list->next;
    }

    return last;
}

/* helper functions */

void insertHead(int n)
{
    struct node *new = calloc(1, sizeof(struct node));
    
    new->data = n;
    new->next = first;

    first = new;
}

void prettyPrint(void)
{
    struct node *p = first;
    
    putchar('[');
    while (p)
    {
        printf("%d", p->data);
        p = p->next;
        (p) ? printf(", ") : printf("]\n");
    }
}