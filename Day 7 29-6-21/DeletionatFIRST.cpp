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


struct node* deleteatfirst(struct node* prevnode, struct node* head, int x) {
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = x;
	ptr->next = prevnode->next;
	prevnode->next = ptr;

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
	head = deleteatfirst(second, head, 45);
	cout << "-------------" << endl;
	lltraversal(head);
}