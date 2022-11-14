#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL;

void insertHead(int n); // helper function to insert elements
void prettyPrint(void); // helper function to pretty print
int count_occurences(struct node *list, int n); // actual function to implement

int main(void) // test program
{
    insertHead(3);
    insertHead(2);
    insertHead(1);
    insertHead(3);
    insertHead(10);
    insertHead(3);
    prettyPrint();

    int target = 3;
    printf("Occurences of {%d}: %d", target, count_occurences(first, target));
}

int count_occurences(struct node *list, int n)
{
    int count = 0;

    while (list)
    {
        if (list->data == n)
            count++;

        list = list->next;
    }

    return count;
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