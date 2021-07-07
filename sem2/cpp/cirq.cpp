#include <iostream>

using namespace std;

class queue {
	int front,rear,size, *a, cur;
public:
	queue(int s) {
		size = s;
		cur = 0;
		front  = -1; rear = -1;
		a = new int[size];
	}

	void enqueue(int d);
	int dequeue();
	void display();
	int getSize();
};

void queue::enqueue(int d) {
	if(front == -1) {
		front = 0;
	}
	else if((rear+1)%size == front) {
		cout << "queue is full!" << endl;
		return;
	}
	rear = (rear + 1)%size;
	a[rear] = d; cur++;
}

int queue::dequeue() {
	if(front == -1) {
		cout << "stack is empty!" << endl;
		return -1;
	}
	int d = a[front];
	if(front == rear) {
		front = -1;
		rear = -1;
		return d;
	}
	front = (front + 1)%size;
	cur--;
	return d;
}

void queue::display() {
	if(front == -1) {
		cout << "queue is empty!" << endl;
		return;
	}
	if(rear == size-1) {
		for(int tmp = front; tmp<size; tmp++) {
			cout << a[tmp] << " ";
		}
	}
	else {
		for(int tmp = front; tmp<=rear; tmp = (tmp+1)%size)
			cout << a[tmp] << " ";
	}
	cout << endl;
}
	
int queue::getSize() {
	return cur;
}

int main() {
	queue q = queue(5);
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(1);
	q.enqueue(0);
	q.enqueue(1);
	q.dequeue();
	q.dequeue();
	q.display();
	cout << q.getSize() << endl;
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.enqueue(1);
	q.dequeue();
	q.display();
	return 0;
}
