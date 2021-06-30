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


struct node* insertatbtw(struct node* head, int x, int index) {
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	int count = 0;
	struct node* p = head;
	while (count != index - 1) {
		p = p->next;
		count++;
	}
	ptr->next = p->next;
	ptr->data = x;
	p->next = ptr;
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
	head = insertatbtw(head, 55, 1); // dosent work index = 0
	cout << "-------------" << endl;
	lltraversal(head);
}