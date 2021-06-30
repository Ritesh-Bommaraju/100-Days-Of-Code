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

struct node *reversell(struct node *head)
{
    struct node *current = head;
    struct node *prev = NULL;
    struct node *nextone;
    while (current != NULL)
    {
        nextone = current->next;
        current->next = prev;
        prev = current;
        current = nextone;
    }
    current = prev;
    return current;
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
    head = reversell(head);
    cout << "-------------" << endl;
    lltraversal(head);
}