#include <iostream>

using namespace std;

class stack {
private:
	struct node {
		int data;
		struct node *next;
	};

	struct node *head;

	struct node* getNewNode(int x) {
		struct node* ptr = new struct node;
		ptr->data = x;
		ptr->next = NULL;
		return ptr;
	}

public:
	//constructor
	stack() {
		head = NULL; //after declaring a stack object set head to NULL as default, as the stack is empty
	}

	void push(int x) {
		struct node *temp = getNewNode(x);

		if(head == NULL) {
			head = temp;
		} else {
			temp->next = head;
			head = temp;
		}
	}

	int pop() {
		if(head == NULL) {
			cout << "Error: stack is already empty" << endl;
			return '\0';
		} else {
			struct node *temp;
			int x;
			temp = head;
			head = head->next;
			x = temp->data;
			delete temp;
			return x;
		}
	}

	int top() {
		return head->data;
	}

	bool isEmpty() {
		if(head == NULL) return true;
		else return false;
	}

	void print_stack() {
		struct node *temp;
		temp = head;

		while(temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};

int main()
{
	stack stack1; //declared a stack object, stack1

	stack1.pop();
	stack1.push(9); stack1.print_stack();
	stack1.push(6); stack1.print_stack();
	stack1.push(8);
	stack1.push(1);
	stack1.push(7);
	stack1.pop(); stack1.print_stack();

	cout << stack1.top() << endl;




	return 0;
}