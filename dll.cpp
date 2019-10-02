#include <iostream>
using namespace std;

struct node {
	int data;
	struct node* prev;
	struct node* next;
};

struct node* head;

struct node* getNewNode(int n) {
	struct node *temp1;

	temp1 = new struct node ; //Allocate in heap
	temp1->data = n; //Set data
	temp1->next = NULL; //Set pointers
	temp1->prev = NULL;
	return temp1;
}

void insertAtHead(int num) {
	struct node *temp1, *temp2;
	temp1 = getNewNode(num);

	if(head == NULL) {
		head = temp1;
		return;
	} else {
		temp2 = head;
		head = temp1;
		temp1->next = temp2;
		temp2->prev = temp1;
	}
}

void insertAtTail(int num) {
	struct node *temp1, *temp2;
	temp1 = getNewNode(num);

	if(head == NULL) {
		head = temp1;
		return;
	} else {
		temp2 = head;

		while(temp2->next != NULL) {
			temp2 = temp2->next;
		}

		temp2->next = temp1;
		temp1->prev = temp2;
		return;
	}
}

void print_list() {
	struct node *temp = head;

	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

void reverse_print(struct node* ptr) {
	if(ptr == NULL) return;
	else {
		reverse_print(ptr->next);
	}
	cout << ptr->data << " ";
}

int main()
{
	head = NULL; //Head pointed to NULL at the beginning of the program

	insertAtHead(0);
	insertAtHead(5);
	insertAtHead(2);
	insertAtHead(1);
	print_list();
	insertAtTail(7);
	insertAtTail(0);
	print_list();
	reverse_print(head);



	cout << endl;
	return 0;
}