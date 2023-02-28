#include<iostream>
using namespace std;
template<class T>
class List {
public:
	class Node {
		friend class List<T>;
		T data;
		Node* next, * prev;
		Node() {
			next = prev = NULL;
		}
		Node(T data, Node* next) {
			this->data = data;
			this->next = next;
		}
	};
	class Iterator {
		Node* current;
		friend class List<T>;
	public:
		Iterator() {
			current = NULL;
		}
		Iterator(Node* current) {
			this->current = current;
		}
		T& operator*() const {
			return current->data;
		}
		Iterator& operator++() {
			if (current != NULL)
				this->current = this->current->next;
			return *this;
		}
		Iterator& operator++(int) {
			this->current = this->current->next;
			Node* old = this->current;
			this->current = old;
			return *this;
		}
		Iterator& operator--() {
			if (current != NULL)
				this->current = this->current->prev;
			return *this;
		}
		Iterator& operator--(int) {
			Node* old = *this;
			--(*this);
			return old;
		}
		bool operator==(const Iterator& rhs) const {
			return current == rhs.current;
		}
		bool operator!=(const Iterator& rhs) const {
			return !(*this == rhs);
		}
	};
	Iterator begin() const {
		return head;
	}
	Iterator end() const {
		return NULL;
	}
	void insert(T value) {
		int count = 0;
		Node* temp = new Node;
		temp->data = value;
		if (head == NULL) {
			temp->next = NULL;
			head = temp;
			tail = temp;
			temp->prev = NULL;
		}
		else {
			tail->next = temp;
			temp->prev = tail;
			temp->next = NULL;
			tail = temp;
		}
	}
	bool Search(T value) const {
		Node* temp = head;
		while (temp != NULL) {
			if (temp->data == value)
				return true;
			temp = temp->next;
		}
		return false;
	}
	void erase(T value) {
		Node* t, * temp = head;
		while (temp != NULL) {
			t = temp->prev;
			if (temp->data == value) {
				t->next = temp->next;
				temp->next->prev = t;
			}
			temp = temp->next;
		}
	}
	void printfor() const {
		Node* curr = head;
		while (curr != NULL) {
			cout << curr->data << " -> ";
			curr = curr->next;
		}
		cout << " NULL " << endl;
	}
	void printbac() const {
		Node* curr = tail;
		while (curr != head->prev) {
			cout << curr->data << " -> ";
			curr = curr->prev;
		}
		cout << " NULL " << endl;
	}
	List() {
		head = tail = NULL;
	}
	~List()
	{
		Node* temp;
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			delete temp;
		} 
	}
private:
	Node* head, * tail;
};
int main() {
	List <int> l1;
	l1.insert(43);
	l1.insert(42);
	l1.insert(51);
	l1.insert(86);
	l1.insert(52);
	l1.insert(21);
	l1.insert(82);


	for (List<int>::Iterator X = l1.begin(); X != l1.end(); X++)
		cout << (*X)++ << " -> ";
	cout << "NULL" << endl;

	for (List<int>::Iterator X = l1.begin(); X != l1.end(); X++)
		cout << (*X) << " -> ";
	cout << "NULL" << endl;
	return 0;
}
