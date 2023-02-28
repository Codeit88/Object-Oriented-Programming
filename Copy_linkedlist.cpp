#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
void disp(Node*ptr) {
	while (ptr != NULL) {
		cout << " " << ptr->data;
		ptr = ptr->next;
	}
}
Node* copypointer(Node*ptr) {
	Node* elem = ptr;
	return elem;
}
int main() {
	Node* n1 = new Node[(sizeof(Node))], 
		* n2 = new Node[(sizeof(Node))], 
		* n3 = new Node[(sizeof(Node))];
	n1->data = 40;
	n1->next = n2;
	n2->data = 41;
	n2->next = n3;
	n3->data = 42;
	n3->next = NULL;
	disp(n1);
	cout << endl;
	Node*n5=copypointer(n1);
	disp(n5);
	return 0;
}
