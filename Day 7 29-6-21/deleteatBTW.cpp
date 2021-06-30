#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node* next;
};
void lltraversal(struct node* ptr) {
	while (ptr != NULL) {
		cout << ptr->data << endl;
		ptr = ptr->next;
	}
}

struct node* deletebtw(struct node* head, int index) {
	struct node* p = head;
	struct node* q = p->next;
	for (int i = 0; i < index - 1; ++i)
	{
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return head;

}
int main() {
	struct node* head;
	struct node* second;
	struct node* third;

	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));

	head->data = 7;
	head->next = second;

	second->data = 10;
	second->next = third;

	third->data = 15;
	third->next = NULL;

	lltraversal(head);
	cout << "-------------" << endl;
	head = deletebtw(head, 2);
	cout << "-------------" << endl;
	lltraversal(head);
}