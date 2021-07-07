#include <iostream>

using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class queue {
	node* front;
	node* back;
	int size;
public:
	queue() {
		front = NULL;
		back = NULL;
		size = 0;
	}

	void enqueue(int data);
	int dequeue();
	void display();
	int getSize();
};

void queue::enqueue(int data) {
	node* rear = new node(data);
	if(size == 0) {
		back = rear;
		front = rear;
		size++;
		return;
	}
	back->next = rear;
	back = rear;
	size++;
}

int queue::dequeue() {
	if(front == NULL) {
		cout << "queue empty!" << endl;
		return -1;
	}
	node* tmp = front;
	front = front->next;
	size--;
	return tmp->data;
}

void queue::display() {
	node* tmp = front;
	if(tmp == NULL) {
		cout << "queue empty!" << endl;
		return;
	}
	while(tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

int queue::getSize() {
	return size;
}
int main() {
	queue q;
	q.enqueue(4);
	q.enqueue(4);
	q.display();
	q.dequeue();
	q.dequeue();
	q.display();
	return 0;
}
