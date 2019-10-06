#include <iostream>
using namespace std;

class LinkedList {
private:
	struct node {
		int data;
		struct node *next;
	};

	struct node *head;

	struct node* getNewNode(int x) {
		struct node* temp;
		temp =  new struct node;
		temp->data = x;
		temp->next = NULL;
		return temp;
	}

public:
	//Constructor: constructor is a function that automatically gets called whenever an object is declared
	LinkedList() { //for empty list, set head = NULL
		head = NULL;
	}

	void insertNode_at_start(int num) {
		struct node *temp1;
		temp1 = getNewNode(num); //allocating a node in dynamic memory;
		temp1->next = head;
		head = temp1;
	}

	void insertNode_at_end(int num) {
		struct node *temp1, *temp2;
		temp1 = getNewNode(num);
		temp2 = head;

		while(temp2->next != NULL) {
			temp2 = temp2->next;
		}
		temp2->next = temp1;
	}

	void print() {
		struct node *ptr;
		ptr = head;

		while(ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}



};

int main()
{
	//We have created two lists, list1 and list2, as an object. Without objects and class concept it 
	//is difficult to make two list in a program
	
	LinkedList list1; //creating a list object

	list1.insertNode_at_start(0);
	list1.insertNode_at_start(2);
	
	list1.insertNode_at_end(1);
	list1.insertNode_at_end(8); 
	list1.insertNode_at_end(4); 
	cout<< "List1: "; list1.print();

	LinkedList list2;
	list2.insertNode_at_start(0);
	list2.insertNode_at_start(8);
	list2.insertNode_at_end(-3); 
	cout << "List2: "; list2.print();
	

	return 0;
}