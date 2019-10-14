#include <iostream>

using namespace std;

struct node {
	int data;
	struct node* next;
};

node* insert_at_tail(int x, node* head) {
	node* temp;
	node* temp2 = head;
	temp = new node;
	temp->data = x;
	temp->next = NULL;

	if(head == NULL) {
		return temp;
	} else {
		while(temp2->next != NULL) {
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	return head;

}

node* reverse(node* head) {
	node *present_node, *prev_node, *next_node = head->next;

	present_node = head;

	while(next_node != NULL) {
		if(present_node == head) {
			next_node = present_node->next; //saving link for the next node
			prev_node = present_node;
			present_node->next = NULL;
			present_node = next_node; //taking link for the next node
		} else {
			next_node = present_node->next; //saving link for the next node
			present_node->next = prev_node; //reversing the link
			prev_node = present_node; //bringing prev_node to the current node
			if(next_node != NULL) present_node = next_node; //update present_node only if the present node is not the last node
		}
	}

	return present_node;
}

int no_of_nodes(node* head) {
	int no_of_nodes;
	node* temp = head;

	for(no_of_nodes=0; temp!=NULL; no_of_nodes++) {
		temp = temp->next;
	}
	return no_of_nodes;
}

void print_list(node* head) {
	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main() {

	node* head = NULL;
	head = insert_at_tail(7, head);
	head = insert_at_tail(1, head);
	head = insert_at_tail(3, head);
	head = insert_at_tail(9, head);

	cout << "The list is: ";
	print_list(head);
	head = reverse(head);
	cout << "Reversed list is: ";
	print_list(head);

	cout << no_of_nodes(head) << " Nodes are there in the list" << endl;



	return 0;
}