#include <bits/stdc++.h>

using namespace std;

class node {
public:
	int data;
	node* next;
};

void addnode(node* head, int data) {
	node* tmp = head;
	node* newnode = new node();
	newnode->data = data;
	newnode->next = NULL;
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newnode;
}

void printlist(node* head) {
	node* tmp = head;
	while(tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << '\n';
}

node* makehead(int data) {
	node* root = new node();
	root->next = NULL;
	root->data = data;
	return root;
}

void deletenode(node* head, int index) {
	int cnt = 1; node* tmp = head;
	if(index == 1) {
		head->data = tmp->next->data;
		tmp = head->next;
		head->next = tmp->next;
		delete tmp;
		return;
	}
	while(cnt != index-1) {
		tmp = tmp->next;
		cnt++;
	}
	node* cur = tmp->next;
	tmp->next = cur->next;
	delete cur;
	
}

node* reverse(node* head) {
	node* tmp = head->next; node* prev = head;
	head->next = NULL;
	while(tmp->next != NULL) {
		node* cur = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = cur;
	}
	tmp->next = prev;
	return tmp;
}
int main() {
	node* root = makehead(5);
	addnode(root,4);
	addnode(root,3);
	addnode(root,2);
	addnode(root,1);
	printlist(root);
	deletenode(root, 3);
	printlist(root);
	node* revroot = reverse(root); printlist(revroot);
	return 0;
} 
