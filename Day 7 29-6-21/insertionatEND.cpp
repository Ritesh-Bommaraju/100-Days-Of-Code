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


struct node* insertatend(struct node* head, int x) {
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = x;
	int count = 0;
	struct node* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = ptr;
	ptr->next = NULL;

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
	head = insertatend(head, 55); // dosent work index = 0
	cout << "-------------" << endl;
	lltraversal(head);
}