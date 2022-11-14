/*
fix the bug:

for (p = first; p != NULL; p = p->next)
    free(p);
*/

p = first;
struct node *tmp;

while (p != NULL)
{
    tmp = p->next;
    free(p);
    p = tmp;
}