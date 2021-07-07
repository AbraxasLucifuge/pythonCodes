#include <bits/stdc++.h>

using namespace std;
class node {

public: 
	int data;
	node* prev;
	node* next;
};

node* makehead(int data) {
	node* root = new node();
	root->data = data;
	root->prev = NULL;
	root->next = NULL;
	return root;
}

void printlist(node* head) {
	node* tmp = head;
	while(tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

void addnode(node* head, int data) {
	node* tmp = head;
	while(tmp->next != NULL)
		tmp = tmp->next;
	node* cur = new node();
	cur->data = data;
	cur->prev = tmp;
	tmp->next = cur;
	cur->next = NULL;
}

void addbefore(node* &head, int data) {
	node* cur = new node();
	cur->data = data;
	head->prev = cur;
	cur->next = head;
	cur->prev = NULL;
	head = cur;
}

void printrev(node* head) {
	node* tmp = head;
	while(tmp->next != NULL)
		tmp = tmp->next;
	while(tmp!=NULL) {
		cout << tmp->data << " ";
		tmp = tmp->prev;
	}
}

void deletenode(node* &head, int index) {
	int cnt = 1; node* tmp = head;
	if(index == 1) {
		tmp = head->next;
		tmp->prev = NULL;
		head->next = NULL;
		head = tmp;
	}
	else {
		while(cnt != index-1) {
			tmp = tmp->next;
			cnt++;
		}
		node* cur = tmp->next;
		if(cur->next == NULL) {
			tmp->next = NULL;
			cur->prev = NULL;
			delete cur;
			return;
		}
		tmp->next = cur->next;
		cur->next->prev = cur->prev;
		cur->next = NULL; cur->prev = NULL;
		delete cur;
	}
}

int main() {
	node* root = makehead(5);
	addnode(root, 4); addnode(root, 3); addnode(root, 2);
	addbefore(root, 1);
	printrev(root); cout << '\n';
	deletenode(root,5);
	printlist(root);
	return 0;
}
