#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void lltraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct node *deletethegivennode(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = p->next;
    while (q->data != value && q->next != NULL)
    // We are doing this q->next != NULL bc what if the given value isnt present and we keep on traversing, so if q's next is a null, we stop, if not it will error
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = NULL;

    lltraversal(head);
    cout << "-------------" << endl;
    head = deletethegivennode(head, 10);
    cout << "-------------" << endl;
    lltraversal(head);
}
