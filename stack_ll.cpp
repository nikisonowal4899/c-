//Implementing Stack using Linked List
#include <iostream>
using namespace std;

struct node {
	int data ;
	struct node *link;
};

struct node *top;

void push(int x) {
	struct node *temp1;
	temp1 = new struct node;
	temp1->data = x;
	temp1->link = top;
	top = temp1;
}

void pop() {
	if(top == NULL) {
		cout << "Stack is Empty\n";
		return ;
	}

	struct node *temp;
	temp = top;
	top = temp->link;
	delete temp;

}

void show_stack() {
	struct node *temp;
	temp = top;

	if(top == NULL) {
		cout << "Stack is Empty\n";
		return;
	}

	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->link;
	}
	cout << endl;
}

int main() 
{
	top = NULL;

	show_stack();
	push(5); show_stack();
	push(2); show_stack();
	pop(); show_stack();
	push(1); show_stack();
	pop(); show_stack();
	pop(); show_stack();
	pop(); show_stack();

	return 0;
}