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

struct node *deletefirst(struct node *head)
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
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
    head = deletefirst(head);
    cout << "-------------" << endl;
    lltraversal(head);
}