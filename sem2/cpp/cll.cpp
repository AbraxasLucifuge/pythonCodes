#include <bits/stdc++.h>

using namespace std;

class node {
public:
	int data;
	node* next;
};

node* makehead(int data) {
	node* root = new node();
	root->next = root;
	root->data = data;
	return root;
}

void printlist(node* head) {
	cout << head->data << " ";
	node* tmp = head->next;
	while(tmp!=head) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

void addnode(node* head, int data) {
	node* tmp = head;
	while(tmp->next != head)
		tmp = tmp->next;
	node* cur = new node();
	cur->data = data;
	tmp->next = cur;
	cur->next = head;
}

void reverse(node* &head) {
	node* prev = head, *tmp = head->next;
	while(tmp != head) {
		node* cur = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = cur;
	}
	head->next = prev;
	head = prev;
}

void deletenode(node* &head, int index) {
	int cnt = 1; node* tmp = head;
	if(index == 1)	{
		tmp = head->next;
		while(tmp->next != head)
			tmp = tmp->next;
		tmp->next = head->next;
		head->next = NULL;
		node* cur = head;
		head = tmp->next;
		delete cur;
	}
	else {
		while(cnt != index-1) {
			tmp = tmp->next;
			cnt++;
		}
		node* cur = tmp->next;
		tmp->next = cur->next;
		cur->next = NULL;
		delete cur;
	}
}
int main() {
	node* root = makehead(5);
	addnode(root, 4); addnode(root, 3); addnode(root, 2); addnode(root, 1);
	printlist(root); cout << "\n";
	reverse(root);
	deletenode(root, 1);
	printlist(root);
	return 0;
}
