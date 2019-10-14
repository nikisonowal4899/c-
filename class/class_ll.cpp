#include <iostream>
using namespace std;

class LinkedlistNode {
	public:
		int data;
		LinkedlistNode *next;

		//constructor
		LinkedlistNode(int node_data) {
			data = node_data;
			next = NULL;
		}
};

class Linkedlist {
	public:
		LinkedlistNode *head;

		//constructor
		Linkedlist() {
			head = NULL;
		}
};

LinkedlistNode* insert_at_tail(LinkedlistNode* head ,int num);
void show_list(LinkedlistNode* head);

//-----*** MAIN FUNCTION *** -----//
int main()
{
	//-----*** LIST 1 ***-----//
	Linkedlist list1;
	int num;
	cout << "Enter five numbers: ";
	for(int i=0; i<5; i++) {
		cin >> num;
		list1.head = insert_at_tail(list1.head, num);
	}

	//-----*** LIST 2 ***-----//
	Linkedlist list2;
	cout << "Enter five numbers: ";
	for(int i=0; i<5; i++) {
		cin >> num;
		list2.head = insert_at_tail(list2.head, num);
	}

	show_list(list1.head);
	show_list(list2.head);

	return 0;
}

LinkedlistNode* insert_at_tail(LinkedlistNode* head, int num) {
	LinkedlistNode *temp = new LinkedlistNode(num); //allocating a new node in the dynamic memory

	if(head == NULL) {
		head = temp;
		return head;
   	} else {
   		LinkedlistNode* temp2 = head;
   		while(temp2->next != NULL) {
   			temp2 = temp2->next;
   		}
   		temp2->next = temp;
   	}
   	return head;
}

void show_list(LinkedlistNode* head) {
	LinkedlistNode* temp = head;

	cout << "List is: ";
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	} cout << endl;
}