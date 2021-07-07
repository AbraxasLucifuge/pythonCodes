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

class stack {
	node* front;
	int cnt;
public:
	stack() {
		front = NULL;
		cnt = 0;
	}

	void push(int d);
	int pop();
	int getSize();
	void display();
};

void stack::push(int data) {
	if(front == NULL) {
		front = new node(data); cnt++;
		return;
	}
	node* tmp = new node(data);
	tmp->next = front;
	front = tmp;
	cnt++;
}

int stack::pop() {
	if(front == NULL) {
		cout << "stack is empty!" << endl;
		return -1;
	}
	int data = front->data;
	node* tmp = front;
	front = front->next;
	tmp->next = NULL; delete tmp;
	cnt--;
	return data;
}

void stack::display() {
	node* tmp = front;
	if(tmp == NULL) {
		cout << "stack is empty!" << endl;
		return;
	}
	while(tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

int stack::getSize() {
	return cnt;
}

int main() {
	stack s;
	s.push(4);
	s.push(1);
	s.push(2);
	s.pop();
	s.display();
	cout << s.pop() << endl;
	s.pop();
	s.display();
	cout << s.getSize() << endl;
	return 0;
}
