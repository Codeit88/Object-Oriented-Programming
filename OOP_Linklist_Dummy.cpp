#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node* curr;
};
void addafter(Node*n,int num,int va) {
	Node* temp = n->next;
	Node* nnew = new Node;
	nnew->data = va;
	while (temp->data != num) {
		temp = temp->next;
	}
	if (temp->data == num) {
		nnew->next = temp->next;
		temp->next = nnew;
	}
}
void addbefore(Node* n, int num, int va) {
	Node* temp = n->next;
	Node* nnew = new Node;
	nnew->data = va;
	Node* prev=temp;
	while (temp->data != num) {
		prev = temp;
		temp = temp->next;
	}
	if (temp->data == num) {
		nnew->next = prev->next;
		prev->next = nnew;
	}
}
void add(Node*n,int val) {
	Node* nnew = new Node;
	nnew->data = val;
	nnew->next = n->next;
	n->next = nnew;
}
void disp(Node*n) {
	Node* temp = n->next;
	while (temp != NULL) {
		cout << temp->data << "\t";
		temp = temp->next;
}
	cout << endl;
}
void mystery(const int& d,	Node*n) {
	Node * t1, * t2;
	t1 = n;
	t2 = n->next;
	while (t1->data != d) {
		t2 = t1;
		t1 = t1->next;
	}
			t2->next = t1->next;
			t1->next = n->next;
			n->next = t1;
		}
int main() {
	Node* n1 = new Node;
	n1->next = NULL;
	add(n1,8);
	add(n1, 5);
	add(n1, 3);
	add(n1, 6);
	add(n1, 9);
	addafter(n1, 3, 43);
	addbefore(n1, 6,55);
	disp(n1);
	mystery(6, n1);
	disp(n1);
	return 0;
}
