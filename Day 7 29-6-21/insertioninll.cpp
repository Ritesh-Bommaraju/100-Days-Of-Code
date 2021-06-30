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

struct node* insertatfirsr(struct node* head, int x) {
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->next = head;
	ptr->data = x;
	return ptr;

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
	head = insertatfirsr(head, 55);
	cout << "-------------" << endl;
	lltraversal(head);
}