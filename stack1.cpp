#include <iostream>
using namespace std;

#define MAX_SIZE 101 // Size of array
int A[MAX_SIZE]; //Declaring an array of size 101
int top = -1; //Will point to the top of an Array

void push(int x) {
	if(top == MAX_SIZE - 1) {
		cout << "Error: Stack Overflow" << endl;
		return;
	}
	A[++top] = x;
}

void pop() {
	if(top == -1) {
		cout << "Error: Nothing to pop\n";
		return ;
	}
	top--;
}

int Top() {
	return A[top];
}

void print() {
	if(top == -1) {
		cout << "Stack is empty\n";
		return ;
	}
	for(int i=0; i<=top; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

int main()
{
	print();
	push(5); print();
	push(7); print();
	pop(); print();
	push(9); print();


	return 0;
}