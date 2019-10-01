#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *next;
};

struct node* head;

void insert(int num) {

	struct node *temp1, *temp2;
	temp1 = new(struct node); //Allocating and extracting pointer 
	temp1->data = num;
	temp1->next = NULL;

	if(head == NULL) {
		head = temp1;
		return;
	} else {
		temp2 = head;
		while(temp2->next != NULL) {
			temp2 = temp2->next;
		}
		temp2->next = temp1;
	}
}

void print_list(node *ptr) {
	if(ptr == NULL) {
		cout << "Empty List" << endl;
		return;
	} else {
		while(ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
}

void reverse_list(node *ptr1) {
	if(ptr1->next == NULL) {
		head = ptr1;
		return ;
	}
	reverse_list(ptr1->next);
	struct node *ptr2 = ptr1->next;
	ptr2->next = ptr1;
	ptr1->next = NULL;
}

int main()
{
	head = NULL;
	/*print_list(head); cout << endl;
	insert(5);
	insert(9);
	insert(8);
	insert(25);
	print_list(head);
	cout << endl;
	reverse_list(head);
	print_list(head);*/

	cout << "How many elements? ";
	int n;
	cin >> n;
 	cout << "Enter the list elements: ";
 	int temp;

 	for(int i=0; i<n; i++) {
 		cin >> temp;
 		insert(temp);
 	}
 	cout << "Forward List: "; print_list(head); cout << endl; 
 	reverse_list(head);
 	cout << "Reversed List: "; print_list(head); cout << endl;



	return 0;
}